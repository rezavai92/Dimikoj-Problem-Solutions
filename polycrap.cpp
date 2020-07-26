#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main (){


int T;
cin>>T;

while (T--){
        int stick,shovel;
        cin>>stick;
        cin>>shovel;
        int sum=0;

        while (stick>0 && shovel >0){
            if (stick ==1 && shovel == 1){
                break;
            }

            if (stick>=shovel  ){

                shovel --;
                stick -=2;
            }
            else if (stick<shovel ) {
                stick--;
                shovel-=2;
            }
            sum+=1;
        }
        cout<<sum<<endl;
}
}
