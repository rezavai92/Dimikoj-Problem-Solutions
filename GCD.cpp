#include <iostream>
using namespace std ;

unsigned long long int GCD (unsigned long long int a, unsigned long long int b){

if (b==0){

    return a;
}

return GCD(b, a%b);


}


int main (){

int T;
cin>>T;

while (T--){

    unsigned long long int a,b,c;

    cin>>a;
    cin>>b;
    cin>>c;
     unsigned long long int lcm =(a*b)/GCD(a,b);
     int co=1;
     for (unsigned long long int i=lcm;i<=c;i+=lcm){

        cout<<i<<endl;
     }

     if(T != 0) {
        cout<<endl;
    }
}
}


