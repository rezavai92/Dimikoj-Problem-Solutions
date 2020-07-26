#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector <string> Fibonacci(int a){
vector <string> v;
int f=0;
v[0]=1+48;

for (int i =1;i<a;i++){

    v[i]=((f-48) + (v[i-1]-48) ) +48;
    f=v[i]-48;
}
return v;
}
int main (){
int n;
cin>>n;

vector <string> fibs =Fibonacci(n);

for (int i=0;i<fibs.size();i++){

    cout<<fibs[i]<<endl;
}


}
