#include <iostream>
#include <bits/stdc++.h>
//#include <vector>
using namespace std;


vector <char> Add (vector <char> x,vector <char> y){

vector <char> result;

if (x.size()>y.size()){

    int diff = x.size() - y.size() ;
    while (diff--){
        y.insert(y.begin(),48);
    }

    }
else {
    int diff = y.size() - x.size() ;
    while (diff--){
        x.insert(x.begin(),48);
    }


}
int carry =0;
 for (int i = x.size()-1;i>=0;i--){

    int sum=(x[i]-48) + (y[i] -48) +carry;

    carry=sum/10;
    int digit = sum%10;
    result.insert(result.begin(),digit+48);
 }
 if (carry >0){
result.insert(result.begin(),carry+48);
 return result;
 }

}




int main (){
int T;
cin>>T;

vector <char> first ={48};
vector <char> second={49};
vector <char> present;

for (int i =1;i<=T-1;i++){

  present=Add(first,second);

 first=second;
 second=present;




}


for (int i=0;i<second.size();i++){
    cout<<second[i];
}
cout<<endl;
}
