#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long double factorial (int n){

    if (n<1){
        return 1;
    }
    return n* factorial(n-1);
}
int main () {

int T;
cin>>T;
while (T--){

    int n;
    cin>>n;
    long double sum=0;
    for (int i=1;i<=n;i++){
        sum+= i/ (factorial(i));

    }
    cout<<fixed<<setprecision(4)<<sum<<endl;

}
cout<<5/factorial(5)<<endl;
}
