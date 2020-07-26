#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main () {

string first;

getline(cin,first);

string second;
getline(cin,second);
cout<<second<<endl;
cout<<first<<endl;
map <char,char> code ;

for (int i=0;i<first.size();i++){
    code[first[i] ] = second[i];
}



string text;

while (getline(cin,text))
{
for (int i=0;i<text.size();i++){
    if ( code.find( text[i]) != code.end() ){
        cout<<code[text[i]];
    }
    else{
        cout<<text[i];
    }

}
text[text.size()]='\0';
cout<<endl;

}


}
