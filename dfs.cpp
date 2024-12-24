#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj,vector<int> &vis,int src,int parent){
        
        vis[src]=1;
       
        for(int i=0 ; i<adj[src].size() ; i++){
            int node = adj[src][i];
            if(!vis[node]){
                dfs(adj,vis,node,src);
            }
        }
            
        
    }

