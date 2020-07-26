#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main () {

int T;
cin>>T;

while (T--){


    vector <int> x;
    vector <int> y;
    vector <int> z;

    int n1,n2;
    cin>>n1;
    while(n1--){
        int number;
        cin>>number;
        x.push_back(number);
    }
    cin>>n2;
    while(n2--){
        int number;
        cin>>number;
        y.push_back(number);
    }

    for (int i=0;i<x.size();i++){
        z.push_back(x[i]);

    }
    for (int i=0;i<y.size();i++){
        z.push_back(y[i]);
    }
    sort(z.begin(),z.end());
    for (int i=0;i<z.size();i++){
        if (i!=z.size()-1){
        cout<<z[i]<<" ";
        }
        else {
             cout<<z[i];
        }
    }
    cout<<endl;

}


}
