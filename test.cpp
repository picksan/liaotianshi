#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string name,pass;
    string str("name:sdmpass:123456");
    if(str.find("name:")!=str.npos){
        int p1=str.find("name:"),p2=str.find("pass:");
        int key1_len=strlen("name:"),key2_len=strlen("pass:");
        name=str.substr(p1+key1_len,p2-p1-key1_len);//参数一开始位置 参数二长度
        pass=str.substr(p2+key2_len,str.length()-p2-key2_len);
        string search="SELECT * FROM USER WHERE NAME=\"";
        search+=name;
        search+="\";";
        cout<<"sql语句:"<<search<<endl;
    }
    
    // cout<<name<<"|"<<endl;
    // cout<<pass<<"|"<<endl;
    return 0;
}