#include <bits/stdc++.h>
using namespace std;
int adjMatrix[100][100];
void dfs(int v,int visited[],int start){
    cout<<start<<" ";
    visited[start]=1;
    for(int i=0;i<v;i++){
        if(adjMatrix[start][i]==1 && visited[i]==0){
            dfs(v,visited,i);
        }
    }
}
int main(){
    int v,e;
    cout<<"enter the vertices:";
    cin>>v;
    cout<<"enter the edges:";
    cin>>e;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
          adjMatrix[i][j]=0;
        }
    }
    cout<<"enter the edge:";
    for(int i=0;i<e;i++){
        int n1, n2;
        cin >> n1 >> n2;
        adjMatrix[n1][n2] = 1;
        adjMatrix[n2][n1] = 1;

    }
    int start,visited[v];
    cout<<"enter statrting node:";
    cin>>start;
    for(int i=0;i<v;i++){
        visited[i]=0;
    }
    cout<<"dfs traversal":<<start<<endl;
    dfs(v,visited,start);
}