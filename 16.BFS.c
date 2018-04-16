#include<stdio.h>
void distance(int,int);
int a[10][10];

void main()
{
        int i,j,n;
        printf("enter the number of vertices in the digraph\n");
        scanf("%d",&n);
        printf("enter the adjaceny matrix\n");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                scanf("%d",&a[i][j]);
        for(i=1;i<=n;i++)
        {
                printf("starting vertex is %d\n",i);
                distance(i,n);
                printf("press enter for other source vertex\n");
        }
}

void distance(int v,int n)
{
        int q[40],visited[20],dis[20],f,r,i,j;
        for(i=1;i<=n;i++)
                visited[i]=dis[i]=0;
        f=r=0;
        q[r++]=v;
        visited[v]=1;
        do
        {
                i=q[f++];
                for(j=1;j<=n;j++)
                        if(a[i][j]&&!visited[j])
                {
                        dis[j]=dis[i]+1;
                        q[r++]=j;
                        visited[j]=1;
                        printf("\n the vertex %d to %d is of distance=%d\n",v,j,dis[j]);
                }
        }
        while(f<r);
}
