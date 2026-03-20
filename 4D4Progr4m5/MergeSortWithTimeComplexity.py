def mergeSort(a, lb, ub):
    #mid = (ub+lb)//2
    if(lb<ub):
        mid = (ub+lb)//2
        mergeSort(a,lb,mid)
        mergeSort(a,mid+1,ub)
        merge(a,lb,mid,ub)

def merge(a, lb, mid, ub):
    i=lb
    k=lb
    j=mid+1
    c=[]
    while i<=mid and j<=ub:
        if a[i]<a[j]:
            c[k]=a[i]
            k+=1
            i+=1
        else:
            c[k]=a[j]
            k+=1
            i+=1
    while i<=mid:
        c[k]=a[i]
        k+=1
        i+=1
    while j<=ub:
        c[k]=a[j]
        k+=1
        i+=1
    for i in range(lb,k-1):
        a[i]=c[i]

import math
n=int(input("enter the number of elements : "))
arr = input("Enter the elements into the array seperated by space : ")
a=[int(i) for i in arr.split()]
sortedArray=mergeSort(a,0,n-1)
print("Sorted Array : ", sortedArray)
t=n*(math.log(n))
print("Time complexity : ",t)


