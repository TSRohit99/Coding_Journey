#include<bits/stdc++.h>

using namespace std;

int main (){
    char word[100];
    char ch;

    cin>>word;

    int smC=0, capC=0;

    int sz=strlen(word);

   for(int i=0; i<sz; i++){
    if(word[i]>=65 && word[i]<=90){
        capC++;
    }
    else
      smC++;

   }

   if(smC>=capC){

   for (int i = 0; i <sz; i++) {

    ch = tolower(word[i]);

    cout << ch;
  }

   }
   else {
    for (int i = 0; i <sz; i++) {

    ch = toupper(word[i]);

    cout << ch;
  }
   }

}
