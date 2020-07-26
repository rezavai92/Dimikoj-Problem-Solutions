#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <string> SplitD (string s){
string name;
vector <string> names;
for (int i=0;i<s.length() ;i++){
    name+=s[i];

    if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1]=='\0') ){

        names.push_back(name);
        name="";
        i++;
    }

}
return names;
}

vector <string> SplitPersons (string s){
string name;
vector <string> names;

for (int i=0;i<s.length() ;i++){
    name+=s[i];

    if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1]=='\0') ){

        names.push_back(name);
        name="";
        i++;
    }

}
return names;
}


int main (){

int T;
string s;
getline (cin,s);
map <string,int> omap;
map <string,int> :: iterator it;

vector <string> persons = SplitPersons(s);
for (int i=0;i<persons.size();i++){
    omap[persons[i] ] =0;
}

while (scanf("%d",T) !=EOF ){

    while (T--){
        string d;
        getline(cin,d);
        vector <string> dist = SplitD(d);
        int sum =0;
        for (int i=0;i<dist.size() ;i++){

            if (i==0){
                sum=floor((stoi (dist[i+1])/stoi(dist[i+2])));
                omap[dist[i]]-= sum*stoi(dist[i+2]);

            }
            if (i==2 && s[i] =='0'){
                continue;
            }
            if (i>2){
                omap[dist[i]]-=sum;
            }
        }

    }
    for (it =omap.begin();it!=omap.end() ;it++ ){

        cout<<it->first<<" "<<it->second<<endl;
    }

}

}
