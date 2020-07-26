#include <iostream>
using namespace std;
int main (){
int T;
cin>>T;


while (T--){


    unsigned long long int a,b,c;

    cin>>a;
    cin>>b;
    cin>>c;

    while (a%c!=0){
            a++;

    }
    for (unsigned long long int i=a;i<=b;i+=c){

        cout<<i<<endl;
    }

    cout<<endl;

}
}
