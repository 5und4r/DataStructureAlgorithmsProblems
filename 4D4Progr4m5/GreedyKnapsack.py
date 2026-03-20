n = int(input("Enter the number of items : "))
w = input("Enter the weights seperated by space : ")
weights = [int(i) for i in w.split()]
p = input("Enter the profits seperated by space : ")
profits = [int(i) for i in p.split()]
capacity = int(input("Enter the capcaity of the knapsack : "))

ratio = [0.0]*n
for i in range(0,n):
    ratio[i]=profits[i]/weights[i]
    for i in range(0,n):
        for j in range(i+1,n):
            if ratio[i]<ratio[j]:
                temp = ratio[j]
                ratio[j]=ratio[i]
                ratio[i]=temp

                temp=weights[j]
                weights[j]=weights[i]
                weights[i]=temp

                temp=profits[j]
                profits[j]=profits[i]
                profits[i]=temp
totalvalue=0
for i in range(0,n):
    if weights[i]>capacity:
        break
    else:
        totalvalue += profits[i]
        capacity -= weights[i]
if i<n:
    totalvalue = totalvalue + (ratio[i]*capacity)
    print("The maximum value is : ", totalvalue)    