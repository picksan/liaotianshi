#include <iostream>
#include <string>
#include <tuple>
#include <string.h>
using namespace std;

int main()
{
    tuple<bool,string,string,int> info;
    
    get<0>(info)=false;//把if_login置为false
    get<3>(info)=-1;//把target_conn置为-1

    bool if_login=get<0>(info);//记录当前服务对象是否成功登录
    string login_name=get<1>(info);//记录当前服务对象的名字
    string target_name=get<2>(info);//记录目标对象的名字
    int target_conn=get<3>(info);//目标对象的套接字描述符

    login_name = "sdm";
    target_name = "akk";

    cout<<if_login<<login_name<<target_name<<target_conn<<endl;
    cout<<get<0>(info)<<get<1>(info)<<get<2>(info)<<get<3>(info)<<endl;

    // string name,pass;
    // string str("name:sdmpass:123456");
    // if(str.find("name:")!=str.npos){
    //     int p1=str.find("name:"),p2=str.find("pass:");
    //     int key1_len=strlen("name:"),key2_len=strlen("pass:");
    //     name=str.substr(p1+key1_len,p2-p1-key1_len);//参数一开始位置 参数二长度
    //     pass=str.substr(p2+key2_len,str.length()-p2-key2_len);
    //     string search="SELECT * FROM USER WHERE NAME=\"";
    //     search+=name;
    //     search+="\";";
    //     cout<<"sql语句:"<<search<<endl;
    // }
    
    // cout<<name<<"|"<<endl;
    // cout<<pass<<"|"<<endl;
    return 0;
}