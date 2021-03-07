#include "tools.hpp"
#include <unordered_map>
#include "ConnectInfo.hpp"
#include <pthread.h>

class UserInfo
{
    public:
        UserInfo(const string & nick_name,const string &school,const string&password,uint32_t user_id):nick_name_(nick_name),school_(school),password_(password),user_id_(user_id)
    {}
        ~UserInfo()
        {}
        
    private:
        string nick_name_;
        string school_;
        string password_;
        uint32_t user_id_;
};

class UserManger
{
    public:
        UserManger()
        {
            user_map_.clear();
            pthread_mutex_init(&map_lock_,NULL);
            prepare_id_ = 0;
        }
        ~UserManger()
        {
            pthread_mutex_destroy(&map_lock_);
        }
        int DealRegister(const string &nick_name,const string school,const string passwd)
        {
            //处理用户信息
            if(nick_name.size() == 0||school.size() == 0 ||passwd.size() == 0)
                return -1;
            pthread_mutex_lock(&map_lock_);
            UserInfo ui(nick_name,school,passwd,prepare_id_);
        
            user_map_.insert(make_pair(prepare_id_,ui));
           prepare_id_++; 
            pthread_mutex_unlock(&map_lock_);
        }
    private:
        unordered_map<uint32_t, UserInfo> user_map_;
        pthread_mutex_t map_lock_;
        uint32_t prepare_id_; // 
};
