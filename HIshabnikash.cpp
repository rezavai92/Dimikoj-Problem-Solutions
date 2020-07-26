#include <iostream>
using namespace std;
int main (){

int T;

cin>>T;

while (T--){
int a,b,c;

cin>>a;
cin>>b;
cin>>c;

//a^b%c
int d=1;
for (int i=1;i<=b;i++){

    d *=(((d%c) *  (a%c) )%c)%c;

}
cout<<"Result = "<<d<<endl;
}
}
