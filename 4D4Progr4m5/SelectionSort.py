n = int(input("Enter the number of elements: "))
a=input("Enter the elements seperated by space:")
Array = [int(x) for x in a.split()]
print("Unsorted Array is:")
print(Array)
for i in range(0,len(Array)-1):
    for j in range(i+1,len(Array)):
        if(Array[i]>Array[j]):
            temp=Array[i]
            Array[i]=Array[j]
            Array[j]=temp
print("Sorted Array is:")
print(Array)
