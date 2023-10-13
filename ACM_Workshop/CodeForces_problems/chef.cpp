#include<iostream>
#include<string>

using namespace std;

bool check(string s, int sz){
    int i;
    int arr[26]={0};
    for(i=0; i<sz; i++){
        char c= tolower(s[i]);
        arr[c-97]=1;
    }
    for(i=0; i<26; i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            return false;
        }
    }
    return true;


}

int main(){
    int sz;
    string s;
        cin>>sz;
        cin>>s;
        if(check(s,sz))
        cout<<"YES"<<endl;

    }
