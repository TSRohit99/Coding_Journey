#include<iostream>
#include<vector>

using namespace std;

vector <int> g[100];

/* In this following codes the node should always start from 0 */

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

    construct_DirGraph(edges);
    // construct_UnDirGraph(edges);
    printGraph(nodes);

    return 0;
}