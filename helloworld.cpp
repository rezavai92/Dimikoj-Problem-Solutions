#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int hashkey (string s){
long int key=1;
for (int i=0;i<s.length() ;i++){

    key = ((key%97)*(s[i] % 97 )) %97;
}
return key;
}
int main () {


int T;

cin >>T;
cin>>ws;
while (T--){

    string s1;
    string s2="";
    string s3="";
    getline(cin,s1);
    int i=0;
    while(s1[i]!=' '){
        s2+=s1[i];
        i++;
    }

    i++;
    while(s1[i]!='\0'){
        s3+=s1[i];
        i++;
    }



    if (hashkey(s2) == hashkey(s3)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

}


