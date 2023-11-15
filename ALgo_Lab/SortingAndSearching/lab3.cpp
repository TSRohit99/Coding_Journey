#include<vector>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
vector <int> v;
stack <int> s;
queue<int> q;
int main ()
{

    int temp,n;
    n=3;
//    cin>>n;
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>temp;
//        v.push_back(temp);
//    }
//
//    cout<<"Printing....."<<endl;
//    for(int i=0; i<v.size(); i++)
//    {
//        cout<< v[i]<<endl;
//
//    }
//
//    sorting
//    sort(v.begin(), v.end());

//stack

//for(int i=0; i<n; i++)
//{
//     cin>>temp;
//       s.push(temp);
//}
//
//  cout<<"Printing....."<<endl;
// while(!s.empty())
//  {
//      cout<< s.top()<<endl;
//      s.pop();
//  }

for(int i=0; i<n; i++)
{
     cin>>temp;
       q.push(temp);
}

 cout<<"Printing....."<<endl;
while(!q.empty())
  {
      cout<< q.front()<<endl;
     q.pop();
  }



}

