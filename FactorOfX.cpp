#include <iostream>
#include <math.h>



using namespace std;

int main (){



int T;
cin >>T;

while(T--){

unsigned long long int x,n;
cin>>x;
cin>>n;

if (n<x){
   cout<<"Invalid!"<<endl;
}

else {

   for (unsigned long long int i=x;i<=n;i+=x){

        cout<<i<<endl;


   }


}
cout<<endl;
}

}
