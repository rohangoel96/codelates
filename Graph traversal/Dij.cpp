#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int nodes,weight,edges,u,v,w,source,minDistance,t;
    priority_queue<pair <int,int> > pipe;
    
    vector < pair <int,int> > adjlist[112345];

    int distance[112345];
    
        
    cin>>nodes>>edges;
    for(int i=0;i<=nodes;i++){distance[i]=-1;}
    pair <int,int> tpair,tpair2;

    while(edges--){
        
        cin>>u>>v>>w;
        
        tpair.first=w;
        tpair.second=v;
        adjlist[u].push_back(tpair);
        
        tpair.first=w;
        tpair.second=u;
        adjlist[v].push_back(tpair);
        //graph filled with all the nodal pairs
    }
    
    cin>>source;
    tpair.first=0;
    tpair.second=source;

    pipe.push(tpair);
    minDistance=0;
    
    while(!pipe.empty()){
        tpair=pipe.top();
        pipe.pop();

        if(distance[tpair.second]==-1){
        distance[tpair.second]=-tpair.first;

        minDistance=distance[tpair.second];

        for(int i=0;i<adjlist[tpair.second].size();i++){
            tpair2=adjlist[tpair.second][i];
            if(distance[tpair2.second]==-1){
                tpair2.first=-(minDistance+tpair2.first);
                pipe.push(tpair2);
            }

            
        }
    
}
       
    
}
        
        for(int i=0;i<nodes;i++)
        cout<<distance[i]<<" ";
    
        
    
        
    return 0;
}
