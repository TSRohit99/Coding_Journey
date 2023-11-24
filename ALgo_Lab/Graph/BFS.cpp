#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector <int> g[100];
int visited[100]= {0}; // 0 means univisted node
int par[100]={-1}; // tracking parrents, -1 means the node has no parrent

/* In this following codes the node should always start from 0 */

//Path finder


void pathFinder(int start, int destination){
    if(start==destination)
      cout<< start<< " ";

    else if (par[destination]== -1)
      cout<<"No path found..."<<endl;

    else{
        pathFinder(start, par[destination]);
        cout<< destination << " ";
      }
}


//BFS Implementation

void BFS(int start){

    queue<int> Q;

    Q.push(start);
    visited[start]=1;

    int u,v;
 
    while(!Q.empty()){

    u = Q.front();
    Q.pop();
    cout<< "\nVisted Nodes are :" << u ;

     for(int i=0; i<g[u].size(); i++){

        v= g[u][i]; // adjecents

        if(visited[v]==0){
            Q.push(v);
            visited[v]=1;
            par[v]=u;
            
        }
     }
   }
}


void printGraph(int nodes){

    cout<<"\n\nAdj. Lists for the  given nodes : \n ";

    for(int i=0; i<nodes; i++){

      cout<<"\nPrinting the Adjacency List of Node "<< i << " : ";

        for(int j=0; j<g[i].size(); j++){
            cout << g[i][j]<< " ";

        }
        cout<<"\n";

    }
}

void construct_DirGraph( int edges){

    int u,v; // u defines Nodes v defines its adjs

    for(int i=0; i<edges; i++){
        cout<< "Construct Edge " << i+1<< ": ";
        cin >> u >> v;
        g[u].push_back(v);
    }

}

void construct_UnDirGraph(int edges){

    int u,v; // u defines Nodes v defines its adjs
    int j=0;
    for(int i=0; i<edges; i++){
        cout<< "Construct Edge " << i+1<< ": ";
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
       

    }

}


int main (){

    int nodes, edges;

    cout<<"Enter the number of Nodes : " ;
    cin>> nodes;
    cout<<"Enter the number of Edges : ";
    cin>>edges;

    cout<<"\nSubmit the Edges of your Graph : \n";

    // construct_DirGraph(edges);
    construct_UnDirGraph(edges);
    printGraph(nodes);
    int root = 1, destination = 4;
    BFS(root); // you can change it to any node
    cout<< "\nPrinting the path of "<< root <<" -> "<<destination<< ": ";
    pathFinder(root, destination);

    return 0;
}
