#include <bits/stdc++.h>
using namespace std ; 

class Graph{
  
    unordered_map<int, list<int> > adjList ; 


public: 
  
    void addEdge(int u, int v , bool dir ){
       
       adjList[u].push_back(v) ; 
       if(!dir){
        adjList[v].push_back(u) ; 
       }
    }

    void printG(){
        for(auto i : adjList){
            cout << i.first << "->" ; 
            for(auto j : adjList[i.first]){
                cout<< j << "," ; 
            }cout<<endl; 
        }
    }
    

    
};

int main(){
   Graph G ; 

   int n ; 
   cin>> n ; 
   int m ; 
   cin>> m ; 
   
   int u , v ; 

   for(int i =0 ; i< m ; i++){
    cin>> u >> v ; 

    G.addEdge(u, v ,0); 

   }

   G.printG(); 

    return 0; 
}