#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    int b = 7;
    cin>>n;
    
    int res= pow(b,n);

    if(n>=3)
    cout<<res%100;

    else
     cout<<res;
}