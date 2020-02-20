#include <string>
#include <iostream>
using namespace std;
int myAtoi(string str) {
    int res=0;
    int i=0;
    int ispositive=1;
    while(i<str.length()&&str[i]==' ')i++;
    if(i==str.length())return res;
    if(str[i]=='-'){
        ispositive= -1;
        i++;
    }
    else if(str[i]=='+')i++;
    else if(!isdigit(str[i]))return res;
    while(i<str.length()){
        if(!isdigit(str[i]))break;
        int strr=str[i]-'0';
        if(ispositive==1&&((res>INT_MAX/10)||(res==INT_MAX/10&&strr>7)))return INT_MAX;
        else if(ispositive==-1&&((res<INT_MIN/10)||(res==INT_MIN/10&&strr>8)))return INT_MIN;
        res=res*10+ispositive*strr;
        i++;
    }
    return res;
}