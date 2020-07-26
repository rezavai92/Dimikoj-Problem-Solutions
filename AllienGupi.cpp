#include <iostream>
using namespace std;
int main (){
int T;
cin>>T;


while (T--){


    double amount;
    int c=0;

    cin>>amount;
    while(amount>1){

        c+=1;
        amount=amount/2;
    }
    cout<<c<<" days"<<endl;
}



}
