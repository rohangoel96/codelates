#include <bits/stdc++.h>
using namespace std;

vector<int>adjlist[112345];
int visited[112345];
void dfs(int current){
    
    visited[current]=1;
    for(int i=0;i<adjlist[current].size();i++){
        
        if(visited[adjlist[current][i]]==0){
            cout<<adjlist[current][i]<<endl;
           visited[adjlist[current][i]]=1; 
            dfs(adjlist[current][i]);
        }
    }
    
}

int main() {
	// your code goes here
	
    int node ,edge,x,y;
    cin>>node>>edge;
    //vector<int> adjlist[node];
    //int varr[node]={0};
    
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    //Graph filled
    
    dfs(0);
    
	
	return 0;
}