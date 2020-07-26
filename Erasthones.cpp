#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> PrimeGenerator (int number){
vector <int> primes ;
vector <bool> primecheck (number+1,true) ;
primecheck[0]=false;
primecheck[1]=false;
vector <bool> :: iterator it ;


for (int i=2;i<=sqrt(number);i++){
    int pr=i;
    if (primecheck[i]){

        for (int j=i*i;j< primecheck.size();j+=pr){

            primecheck[j]=false;
        }

    }
}

for (int i=2;i<=number;i++){
    if(primecheck[i]){
        primes.push_back(i);
        cout<<i<<endl;
    }
}
return primes;
}
int main (){

int num;
cin>>num;

vector <int> v=PrimeGenerator(num);

for (int i=0;i<v.size();i++){

       // cout<<v[i]<<endl;

}
}
