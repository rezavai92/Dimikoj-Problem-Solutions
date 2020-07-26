
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool IsTriangle(int a ,int b,int c){

if(a >b+c || b >a+c || c > a+b){
    return false;
}
return true;

}

int main (){
int T;
cin >>T;

while  (T--){


    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (IsTriangle(a,b,c)){
        double s= (double ) (a+b+c)/2;
        double p = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area = "<<fixed<<setprecision(3)<<p<<endl;
        //printf("Area = %0.3lf\n",p);

    }
}

}
