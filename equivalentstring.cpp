#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 string a,b,a1,a2,b1,b2;

 cin >> a;
 cin >> b;

 if (a==b){
    cout <<"YES"<<endl;
    return 0;
 }

 for (int i=0;i<a.length()/2;i++){
    a1+=a[i];
 }

  for (int i=a.length()/2;i<a.length();i++){
    a2+=a[i];
 }
// string r_a2 =reverse(a2.begin(),a2.end());

  for (int i=0;i<b.length()/2;i++){
    b1+=b[i];
 }



 string r_b1 =b1;
 reverse(r_b1.begin(),r_b1.end());

  for (int i=b.length()/2;i<b.length();i++){
    b2+=b[i];
 }
 string r_b2 = b2;
 reverse(r_b2.begin(),r_b2.end());
 //cout<<r_b2<<endl;

 if (a1==b2 && a2==b1){
    cout <<"YES"<<endl;
 }
 else if (a1==r_b2 && a2==r_b1){
    cout<<"YES"<<endl;
 }

 else if (a1==r_b1 && a2==r_b2){
    cout<<"YES"<<endl;
 }
 else if (a1==b1 && a2==r_b1){
        cout<<"YES"<<endl;
 }

 else if (a2==b2 && a1==r_b2){
    cout<<"YES"<<endl;
 }
  else if (a2==b2 && a1==r_b1){
    cout<<"YES"<<endl;
 }

  else if (a2==b1 && a1==r_b1){
    cout<<"YES"<<endl;
 }
  else if (a2==r_b2 && a1==b2){
    cout<<"YES"<<endl;
 }
 else {
        cout<<"NO"<<endl;
 }

}
