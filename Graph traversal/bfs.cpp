#include <bits/stdc++.h>
using namespace std;


vector<int>adjlist[112345];
int visited[112345];

void bfs(int current){
    queue <int>pipe;
    pipe.push(current);
    visited[current]=1;
    while(!pipe.empty()){
        current=pipe.front();
        cout<<current<<endl;
        pipe.pop();
    for(int i=0;i<adjlist[current].size();i++){
        if(!visited[adjlist[current][i]]){
            pipe.push(adjlist[current][i]);
            visited[adjlist[current][i]]=1;
        }
    }
    }
}

int main() {
	// your code goes here
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    //vector<int>adjlist[nodes];
    //int visited[nodes]={0};
    while(edges--){
        cin>>x>>y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    bfs(0);
	
	return 0;
}