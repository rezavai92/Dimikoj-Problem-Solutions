#include <iostream>
#include <map>
using namespace std;
int main (){

int m,n;
map <string ,int> omap;
cin>>m;
cin>>n;

while (m--){


    string s;
    int number;
    cin>>s;
    cin>>number;
    omap[s]=number;

}
while (n--){

    cin>>ws;
    string st;
    getline(cin,st,'.');
    string s1="";
    int salary=0;
    for (int i=0;i<st.size();i++){
        s1+=st[i];

        if (st[i] !=' ' && (st[i+1]==' ' || st[i+1]=='\n' || st[i+1]=='.' ) ) {
        if ( omap.find(s1)!=omap.end() ){
            salary+=omap[s1];


    }
            s1="";
            i++;
}

}
    cout<<salary<<endl;
}
}
