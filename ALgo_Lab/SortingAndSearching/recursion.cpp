#include<iostream>

using namespace std;


int rec(int x, int y){
    int m=3;
    if(y==0)
     return 1;
    
    else
    return (x*rec(x,y-1))%m;
}


int main(){
    cout<<rec(2,3);

}