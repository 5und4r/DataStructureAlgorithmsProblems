def max(a,b):
    if a>b:
        return a
    else:
        return b
def knapsack(wt,wei,prof,n):
    if n==0 or wt ==0:
        return 0
    if wei[n-1]>wt:
        return knapsack(wt,wei,prof,n-1)
    else:
        return max(prof[n-1] + knapsack(wt-wei[n-1],wei,prof,n-1),knapsack(wt,wei,prof,n-1))

profit = [60,100,120]
weight = [10,20,30]
w =125
n = len(profit)
print("Maximum profit is ") 
print(knapsack(w,weight,profit,n))