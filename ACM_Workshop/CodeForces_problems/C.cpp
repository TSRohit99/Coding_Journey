#include<bits/stdc++.h>

using namespace std;

int main (){
    int T, N;
    cin>>T;
    while(T--){
        cin>>N;
        vector<int>arr(N);
     for(int i=0; i<N; i++){
        cin>>arr[i];
        
     }
     sort(arr.begin(),arr.end()); 

    vector<int>min1(N-1);
   
        for(int i=0; i<N-1; i++)
            min1[i] = arr[i+1]-arr[i];   

    sort(min1.begin(),min1.end());

    cout<<min1[0]<<endl;

    }
      
 
         
    }
