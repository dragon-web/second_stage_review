#pragma once 
#include <stdio.h>
#include <iostream>
#include <string.h>

//注册请求格式
struct RegisterInfo
{
    RegisterInfo()
    {
        memset(nick_name_,'\0',20);
        memset(school_,'\0',20);
        memset(password_,'\0',20);
    }
    char nick_name_[20];
    char school_[20];
    char password_[20];
};

//登录请求数据格式

struct ReplyInfo
{
    int RespStatus;
    uint32_t id_; //返回给用户的id
};

struct LoginInfo{
    LoginInfo()
    {
        memset(passwd,'\0',20);
    }
    uint32_t ID;
    char passwd[20];
};
enum stus
{
    REGISTER_FAILED = 0,
    REGISTER_SUCCESS,
    LOGIN_FAILED,
    LOGIN_SUCCESS
};

enum ResqType
{
    REGISTER_RESQ = 0,
    LOGIN_RESQ
};

//服务端给客户端恢复应答的数据格式 



//如何标识当前请求是注册请求还是登录请求
