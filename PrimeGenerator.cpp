
#include <iostream>
#include <math.h>


#include <vector>
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

vector <long int> PrimeFactors (long int n){

vector <long int> primefactors;



for (int i=1;i<=sqrt(n);i++){
    if (IsPrime(n)){

    primefactors.push_back(n);
    return primefactors;

}

    if (IsPrime(i) && (n%i==0) ){
        primefactors.push_back(i);

        n=n/i;
        i=0;
        }

}

return primefactors;
}
vector <long int> PrimeGenerator (long int n){

vector <long int> v;
for (int i=2;i<=n;i++){


    if (IsPrime(i)){
        v.push_back(i);
    }
}
return v;
}

int main (){

long int number;
cin>>number;

vector <long int> primes =PrimeGenerator(number);
vector <long int> primefactors =PrimeFactors(number);

for (long int i=0;i<primefactors.size();i++){

    cout<<primefactors[i]<<endl;
}

}
