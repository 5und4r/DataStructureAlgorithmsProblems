#include<stdio.h>

int main()
{
    float weight[50],profit[50],ratio[50],totalvalue=0,temp,capacity,amount;
    int n,i,j;
    printf("Enter the number of items\n");
    scanf("%d",&n);
    printf("Enter the weights and the profits of the items\n");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&weight[i],&profit[i]);
    }
    printf("Enter the capacity of knapsack: ");
    scanf("%d",&capacity);
    for(i=0;i<n;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j]){
            temp=ratio[i];
            ratio[i]=ratio[j];
            ratio[j]=temp;

            temp=weight[i];
            weight[i]=weight[j];
            weight[j]=temp;

            temp=profit[i];
            profit[i]=profit[j];
            profit[j]=temp;
            }
        }
    }
    //printf("Solution using Greedy technique is: \n");
    for(i=0;i<n;i++)
    {
        if(weight[i]>capacity)
        {
            break;
        }
        else
        {
            capacity=capacity-weight[i];
            totalvalue=totalvalue+profit[i];
        }
    }
    if(i<n)
    {
        totalvalue=totalvalue+ (ratio[i]*capacity);
    }
    printf("The total value is %f\n",totalvalue);
}