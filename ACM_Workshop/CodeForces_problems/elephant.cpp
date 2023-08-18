#include<bits/stdc++.h>

using namespace std;

int main(){
    int x; 
    cin>>x;
int val, rval;

    if(x>=5){
        val= x/5;
        rval=x%5;
        if(rval!=0){
            val++;
        }
    }
    else
     val=1;

     cout<<val;




    }