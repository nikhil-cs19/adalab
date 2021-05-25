#include<stdio.h>
int a[20][20],vis[20],n,j=0,to[20];
void dfs(int vertex){
    vis[vertex]=1;
    for(int i=1;i<=n;i++){
        if((a[vertex][i]==1) && (vis[i]==0)){
            dfs(i);
        }
    }
    to[j++]=vertex;
}
void main(){
    int m,u,v;
    printf("Enter no of vertices\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
      printf("Enter number of edges");
        scanf("%d",&m);
        for(int i=1;i<=m;i++)
        {
        printf("enter an edge  ");
        scanf("%d%d",&u,&v);
        a[u][v]=1;
        }
        printf("Adjacency matrix\n");
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    dfs(1);
    printf("Topological order\n");
    for(int i=n-1;i>-1;i--){
        printf("%d\n",to[i]);
    }
}
