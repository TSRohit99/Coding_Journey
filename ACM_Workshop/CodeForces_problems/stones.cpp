#include<bits/stdc++.h>

using namespace std;

int main (){
    int num;
    
    cin>>num;
    char str[num];
    cin>>str;
    int rmv=0;
    for(int i=0; i<num; i++){
        if(str[i]==str[i+1]){
            rmv++;
        }
    }
    cout<<rmv;
}