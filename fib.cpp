#include <iostream>
using namespace std;

int main () {

int f=0;
int s=1;
int p;
for (int i=0;i<40;i++){

    cout<<s<<endl;
    p=f+s;
    f=s;
    s=p;
}
}
