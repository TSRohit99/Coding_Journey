#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[100];

    cin>>str;

    int dis=0;

    for(int i=0; i<strlen(str); i++){
        for(int j=i; j<strlen(str); j++){
            if(str[i]==str[j+1])
              dis++;
        }
    }

    if((strlen(str)-dis)%2==0)
     cout<<"CHAT WITH HER!";
     else
     cout<<"IGNORE HIM!";



}
