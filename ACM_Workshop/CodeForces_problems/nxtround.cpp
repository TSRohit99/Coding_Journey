#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,k,i=0;
    cin>>n;
    cin>>k;
    int arr[n];

      while(i<n){
        cin>>arr[i];
        i++;
      }
      int advnc=0;

      for (int i = 0; i < n; i++) {
        if (arr[i] >=arr[k-1]  && arr[i] > 0) {
            advnc++;
        }
      }

     cout<<advnc<<endl;    
        
    }
