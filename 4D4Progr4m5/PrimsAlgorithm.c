// #define INT_MAX __INT_MAX__ Expands to: 0x7fffffff
//INT_MAX is a preprocessor macro defined as __INT_MAX__. 
//It expands to the implementation-defined maximum value representable by int (typically provided via <limits.h>/).
#include<stdio.h>
#include<limits.h>
#define vertices 5
int minimumKey(int k[], int mst[])
{
    int minimum = INT_MAX,i,min;
    for(i=0;i<vertices;i++)
    {
        if(mst[i]==0&&k[i]<minimum)
        minimum = k[i], min = i;
    }
    return min;
}
int prims(int g[vertices][vertices])
{
    int parent[vertices];
    int k[vertices];
    int mst[vertices];
    int i, count, v, edge;
    for(i=0;i<vertices;i++)
    {
        k[i]=INT_MAX;
        mst[i]=0;
    }
    k[0]=0;
    parent[0]=-1;
    for(count=0;count<vertices-1;count++)
    {
        edge = minimumKey(k, mst);
        mst[i]=1;
        for(v=0;v<vertices;v++)
        {
            if(g[edge][v] && mst[v]==0 && g[edge][v]<k[v])
            {
                parent[v]=edge;
                k[v]=g[edge][v];
            }

        }
    }
    printf("\n EDGE \t WEIGHT \n");
    for(i=1;i<vertices;i++)
    printf("%d <-> %d %d \n",parent[i],i,g[i][parent[i]]);
}
int main()
{
    int g[vertices][vertices] = {
        {0,2,3,6,7},
        {2,0,7,8,9},
        {3,7,0,4,1},
        {6,8,4,0,5},
        {7,9,1,5,0},
    };
    prims(g);
    return 0;

}