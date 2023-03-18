   vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       priority_queue<pair<int, int>  ,vector<pair<int, int>>, greater< pair<int, int>> > pq ; 
       vector<int> dist(V) ;
       for(int i =0 ; i< V ; i++) dist[i] = 1e9  ; 
       
       dist[S] = 0 ; 
       pq.push({S,0}) ; 
       
       
       while(!pq.empty()){
           
           auto it = pq.top(); 
           
           int dis = it.second ; 
           int node = it.first ; 
             pq.pop() ; 
           
           for(auto nb : adj[node]){
               int newwt = nb[1] ; 
               int adjnode = nb[0] ; 
               
               if(dis + newwt < dist[adjnode]){
                   dist[adjnode] = dis + newwt ; 
                   pq.push({adjnode,dist[adjnode]}) ; 
               }
           }
       }
       
        return dist ; 
        
    }
