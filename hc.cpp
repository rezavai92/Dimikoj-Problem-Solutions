#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    vector <int> v;
    cin >> T;
    cin>>ws;
    while (T--){
        string  number;
        getline (cin,number);
        vector <string> v1;
        string s="";
        for (int i=0;i<number.length() ; i++){

            s+=number[i];
            if (number[i] !=' ' && (number[i+1] == ' ' || number[i+1] =='\0' ) ){
                v1.push_back(s);
               // cout<<s<<endl;

                s="";
                i++;
            }


        }
        int c,n;
        if (v1.size() >1){
            v.push_back(stoi(v1[1]));
        }
        else {
            if (v1[0] =="2"){
                 //   cout<<v1[0]<<endl;
                v.pop_back();
            }
            else if (v1[0] =="3"){
               //cout<<v1[0]<<endl;
                cout<<*max_element(v.begin() ,v.end())<<endl;
            }
        }

    }
    return 0;
}
