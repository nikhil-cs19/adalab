#include<stdio.h>
int a[20][20],vis[20],n;



void main(){
    int start_vertex,m,u,v;
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
        printf("enter an edge ");
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
    printf("Enter the node\n");
    scanf("%d",&start_vertex);
    printf("Nodes reachable from %d are\n",start_vertex);
    for(int i = 1;i<=n;i++){
        if(a[start_vertex][i]==1){
            printf("%d\n",i);
        }
    }
}
