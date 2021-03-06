#pragma once 
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

#define LOG(LogLevel,msg) Log(loglevel,__FILE__,__LINE__,)
enum LogLevel
{
    INFO = 0,
    WARNING,
    ERROR,
    FATAL, //致命错误 
    DEBUG,
    CREATE_SOCK_ERROR
};


class TimeStamp
{
    public:
       static void GetTimeStamp(string * timestamp)
        {
            time_t sys_time;
            time(&sys_time);
            struct tm* t = localtime(&sys_time);
            char buf[30] = {'\0'};
            snprintf(buf,sizeof(buf) - 1,"%04d-%02d-%02d %02d:%02d:%02d",t->tm_year + 1900,t->tm_mon + 1,t->tm_mday,t->tm_hour,t->tm_min,t->tm_sec);
            timestamp->assign(buf,strlen(buf));
        }
};



ostream& Log(LogLevel logvel, const char* file ,int line, string & msg)
{
    string timestamp;
    TimeStamp::GetTimeStamp(&timestamp);
    cout << "[" << timestamp << " "<< logvel << " " << file  << ":" << line  << "]" << " " << " " << msg; 
    return std::cout;
}

