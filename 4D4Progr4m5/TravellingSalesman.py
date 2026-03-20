import numpy as np
G=np.array([[0,1,2,3],[2,0,4,8],[7,8,0,4],[2,5,6,0]])
visited = np.array([])
cost =0
n=4
def TravellingSalesman(c):
    adjVert = 999
    min = 999
    global cost
    cost = 0
    global visited
    visited = np.array([])
    visited[c]=1
    print(c+1)
    for k in range(n):
        if G[c,k]!=0 and visited[k]==0:
            if G[c,k]<min:
                min = G[c,k]
            adjVert=k
    if min!=999:
        cost=cost+min
    if adjVert==999:
        adjVert=0
        print(adjVert+1)
        cost=cost+G[c,adjVert]
        return
    TravellingSalesman(adjVert)

for i in range(n):
    visited[i]=0
print("shortest path :")
TravellingSalesman(0)
print("cost :",cost)

