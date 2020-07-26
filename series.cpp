#include <iostream>
#include <math.h>



using namespace std;

int main (){



int T;
cin >>T;

while(T--){

    int n,k;
    int sum=0;

    cin>>n;
    cin>>k;
    for(int i=0;i<=k;i++){

        sum+=round(pow(n,i));
    }

    cout<<"Result = "<<sum<<endl;
}




}

