#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main (){


int T;
cin>>T;

while (T--){
        int number;
    cin>>number;
    int div=5;
    int sum=0;
    while (number/div>= 1){
        sum+=(number/div);
        div =div*5;

    }
    cout<<sum<<endl;

}
}
