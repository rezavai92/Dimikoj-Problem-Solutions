#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;

bool IsPerfectNumber(unsigned long long int n){

vector<int> v;

for (long long int i=1;i<sqrt(n);i++){

    if (n%i==0 ){
        v.push_back(i);
        if(find(v.begin(),v.end(),n/i)==v.end() && (n/i)!=n ){
            v.push_back(n/i);
        }
    }

}
unsigned long long int sum=0;
for(long long int i=0;i<v.size();i++){
    sum+=v[i];

}
if (sum==n){
    return true;
}

return false;

}

int main (){

int T;
cin>>T;
while (T--){
    unsigned long long int n;
    cin>>n;

    if (IsPerfectNumber(n)){

        cout<<"YES, "<<n<<" is a perfect number!"<<endl;
    }
    else{

        cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
    }
}
}
