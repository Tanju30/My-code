#include <bits/stdc++.h>
using namespace std;
int adjMatrix[100][100];
void bfs(int no_vertices,int start){
     int visited[no_vertices];
     queue<int>q;
     for(int i=0;i<no_vertices;i++){
        visited[i]=0;
     }
     q.push(start);
     visited[start]=1;

     while(!q.empty()){
        int s = q.front();
        cout<<s<<"";
        q.pop();
         for(int i=0;i<no_vertices;i++){
            if(adjMatrix[s][i]==1 && visited[i]==0){
                q.push(i);
                visited[i]= 1;
            }
         }
     }
}
int main(){
    int v,e;
    cout<<"enter the number of vertices:";
    cin>>v;
    cout<<"enter the number of edges:";
    cin>>e;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            adjMatrix[i][j]=0;
        }
    }
    cout<<"enter the edge:";
    for(int i=0;i<e;i++){
        int n1,n2;
        cin>>n1>>n2;
        adjMatrix[n1][n2]=1;
         adjMatrix[n2][n1]=1;


    }
    int start;
    cout<<"enter starting node:";
    cin>>start;
    bfs(v,start);
}
