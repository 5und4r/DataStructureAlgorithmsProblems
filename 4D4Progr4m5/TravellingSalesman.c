#include<Stdio.h>
int G[10][10] = {{0,1,2,3},{2,0,4,6},{3,6,0,9},{4,8,12,0}};
int visited[10], n=4, cost =0;
void travellingSalesman(int c)
{
    int adjvert=999,k;
    int min =999;
    visited[c]=1;
    printf(" %d ",c+1);
    for(k=0;k<n;k++)
    {
        if((G[c][k]!=0)&&(visited[k]==0))
        {
            if(G[c][k]<min)
            {
                min = G[c][k];
            }
            adjvert=k;
        }
    }
    if(min!=999)
    {
        cost = cost+min;
    }
    if(adjvert==999)
    {
        adjvert=0;
        printf(" %d ",adjvert+1);
        cost=cost+G[c][adjvert];
        return;
    }
    travellingSalesman(adjvert);
}
int main()
{
    int i;
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    printf("Shortest Path: \n");
    travellingSalesman(0);
    printf("\nMinimum cost : \n");
    printf("%d", cost);
    return 0;
    
}

