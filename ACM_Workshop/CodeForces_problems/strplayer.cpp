#include<iostream>
#include<string>

using namespace std;

bool check(string s, int l){
    int i, zero=0,one=0;
    for(i=0; i<l; i++){
        if(s[i]=='0'){
        zero++;
        one=0;
        
        }
        else {
            one++;
            zero=0;
        }
     if(zero>=7 || one>=7){
        return true;
     }
         

    }
    return false;


}

int main(){
    string s;
    cin>>s;
        if(check(s,s.length()))
            cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;         
        
    }