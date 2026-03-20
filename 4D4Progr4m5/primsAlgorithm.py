vertices = 5
def minimumKey(k, mst):
    minimum = float('inf')
    min_index = -1
    for i in range(0, vertices):
        if mst[i] == 0 and k[i] < minimum:
            minimum = k[i]
            min_index = i
    return min_index
def prims(g=None):
    k = [0] * vertices
    mst = [0] * vertices
    parent = [-1] * vertices
    for i in range(0,vertices):
        k[i]=1000000
        mst[i]=0
    k[0]=0
    for count in range(0,vertices):
        edge = minimumKey(k, mst)
        if edge == -1:
            break
        mst[edge]=1
        for v in range(0,vertices):
            if g[edge][v] and mst[v] == 0 and g[edge][v]<k[v]:
                parent[v]=edge
                k[v]=g[edge][v]
    print("\nEdge \t Weight\n")
    for i in range(1,vertices):
        print(f"{parent[i]} <-> {i} \t {g[i][parent[i]]}")

g = [[0,0,3,0,0],[0,0,10,4,0],[3,10,0,2,6],[0,4,2,0,1],[0,0,6,1,0]]
prims(g)
    


