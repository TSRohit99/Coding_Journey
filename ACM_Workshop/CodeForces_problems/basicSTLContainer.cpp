// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main (){
    // vector<int> arr;

    // arr.push_back(40);
    // arr.push_back(50);
    // arr.push_back(200);
    // arr.push_back(10);
    // arr.pop_back();
    // sort(arr.begin(), arr.end());
    // // sort(arr.begin(), arr.end(), function poointer);
    // cout<< arr.size()<<endl;

    // for(int x: arr){
    //     cout<<x<<" ";
    // }

//    arr.begin(); returns pointer 
// we can use auto to intialize any DTs while complie time but cant take input as this data type
    
//          pair

// vector<pair<int, int>> p;

// p.push_back({10,20});
// cout<< p[0].first+p[0].second;

// pair<int,int> p;
// p={10,20};
// // p=make_pair(10,20);
// cout<< p.first+p.second;

// //set
// set<string> s;
// s.insert("rohit");
// s.insert("hello");
// s.insert("kkk");

// for(string x: s){
//     cout<<x<<endl;
// }
// cout<<endl;
// s.erase("hello");
// // s.clear();

// for(string x: s){
//     cout<<x<<endl;
// }


//maps

map<int,string> m;

// m[1]="hello";
// m[2]="Rohit";

// cout<<m[1];

 string str;
for(int i=0; i<3; i++){
   
    cin>>str;
    m[i]=str;
}

for(auto x: m){
    cout<<x.first<<endl;
    cout<<x.second<<endl;

}
}