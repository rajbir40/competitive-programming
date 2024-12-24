#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj,vector<int> &vis,int src){
        
        vis[src]=1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        
        while(!q.empty()){
            
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            vis[node]=1;
            
            for(int i=0 ; i<adj[node].size() ; i++){
                int curr = adj[node][i];
                if(!vis[curr]){
                    vis[curr]=1;
                    q.push({curr,node});
                }
            }
            
        }
        
        
    }

