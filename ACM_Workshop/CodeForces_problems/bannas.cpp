#include<bits/stdc++.h>

using namespace std;

int main (){
    int k,n,w;
    cin>>k;
    cin>>w;
    cin>>n;
    int cost=0;

    for(int i=1; i<=n; i++){
        cost+=(i*k);
    }
    if((cost-w)>=0)
      cout<<(cost-w);
    else
     cout<<0;

}
