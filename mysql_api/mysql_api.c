#include <stdio.h>
#include <string.h>
#include "mysql/mysql.h"

MYSQL mysql;
char buf[150];

bool ConnectDatabase()
{
   const char* host = "182.254.165.11";
   const char* user = "root";
   const char* passwd = "root";
   const char* db = "fff";
    int port = 3306;

    mysql_init(&mysql);
    if(!mysql_real_connect(&mysql, host, user, passwd, db, port, NULL, CLIENT_FOUND_ROWS))
    {
        printf( "Error connecting to database:%s\n",mysql_error(&mysql) );
        return false;
    }
    else
    {
         printf("Connected Success...\n");
         return true;                   
    }
}

    void FreeConnect()
    {
        mysql_close(&mysql);
    }

