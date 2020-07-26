#include <iostream>

#include <math.h>
using namespace std;

bool IsPrime (long int n){

if (n>1){
for (int i=2;i <= sqrt(n);i++){


    if (n%i==0){
        return false;
    }
}
}
else {
    return false;
}
return true;

}
bool IsPerfect ( long int n){

long int sum=1;

for ( long int i=2;i<=sqrt(n) ;i++ ){


    if (n%i==0 && (n/i)!=i) {

        sum+=i+(n/i);

    }
    else if (n%i==0 && (n/i)==i) {
        sum+=i;
    }
}
if (sum==n && n>1){
    return true;
}
return false;
}
int main (){
int T;
cin>>T;


while (T--){

long int n;
cin>>n;

for (long int i=2;i<=n;i++){
if (IsPrime(i)&& i!= 11){
long long int perfect = (round(pow(2,i))-1) * round(pow(2,(i-1)));
if (perfect<=n){

    cout<<perfect<<endl;



}
else{
    break;
}
}

}

if (T!=0){
    cout<<endl;
}

}}
