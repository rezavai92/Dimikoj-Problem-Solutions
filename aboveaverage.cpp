#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main (){


int T;
cin>>T;
while (T--){
    vector <int> v;
    int a;

    cin>>a;
    int total=a;
    int sum=0;
    while (a--){
        int b;
        cin>>b;
        sum+=b;
        v.push_back(b);
    }

    double avg = (double) sum/(double)total;

    int c=0;
    for (int i=0;i<v.size();i++){
        if (v[i] > avg ){
            c+=1;
        }

    }

    cout<<fixed<<setprecision(3)<<(((double)c/(double)total)*100)<<"%"<<endl;
}
}
