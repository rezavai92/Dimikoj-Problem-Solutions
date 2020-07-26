#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


int myAtoi(string str) {
int c=0;
int index =0;
double num=0;
int n=0;
bool isNegative =false;
string s;

for (int i=0;i<str.length();i++){
    if (str[i] == ' ' && c>0){
        break;
        }
    if (str[i]!=' '){
        s+=str[i];
        c++;
    }

}
//cout<<s<<endl;
if (s[0] =='-' ){
    isNegative =true;
    //index++;
}
else if (s[0] =='+'){
    isNegative = false;
}
else if  (s[0] >'9' || s[0] <'0'){
        return 0;
    }
else {
    num=num*10+s[0]-48;
}



for (int i=1;i<s.length();i++){
    if (s[i] <='9' && s[i] >='0'  ){
        num= num*10+s[i]-48 ;
    }

    else {
        break;
    }
}
if (isNegative){
    num=-num;
}
if (num>INT_MAX){
    return INT_MAX;
}
if (num <INT_MIN){
    return INT_MIN;
}
return (int)num;
}

int main (){
string s="ord 3";
 cout<<myAtoi (s)<<endl;

}


