#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {

    string s;
    getline(cin,s);
    int key;
    cin>>key;
    string s1="";

    for (int i=0;i<s.size();i++){



        if(isupper(s[i])){
            if ( s[i] -key<65 ){
                s1+=(char) (s[i]-key+26);
            }
            else{
                s1+=(char) (s[i] - key);
            }
        }
        else if (islower(s[i])){
                    if ( s[i] -key<97){
                s1+=(char) (s[i]-key+26);
            }
            else{
                s1+=(char) (s[i] - key);
            }
       }
       else {
        s1+=s[i];
       }

    }
    cout<<s1<<endl;
}


