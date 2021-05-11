#include<stdio.h>
int a[20][20],vis[20],n;
void dfs(int vertex){
    vis[vertex]=1;
    printf("%d\n",vertex);
    for(int i=1;i<=n;i++){
        if((a[vertex][i]==1) && (vis[i]==0)){
            dfs(i);
        }
    }
}
void main(){
    int start_vertex;
    printf("Enter no of vertices\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
    printf("Enter the vertex to start from\n");
    scanf("%d",&start_vertex);
    printf("Nodes reachable from %d are\n",start_vertex);
    dfs(start_vertex);
}
