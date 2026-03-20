# include<stdio.h>

int max(int a, int b)
{
    return (a>b)?a:b;
}

int knapsack(int w, int wei[], int val[], int n)
{
    if(n==0||w==0)
    return 0;

    if(wei[n-1]>w)
    return knapsack(w,wei,val,n-1 );
    else
    return max(val[n-1] + knapsack(w-wei[n-1], wei, val, n-1), knapsack(w, wei, val, n-1));
}

int main()
{
    int weight[]={60,33,100};
    int profit[]={333,44,888}; 
    int w, n;
    w = 125;
    n = sizeof(profit)/sizeof(profit[0]);
    printf("Maximum profit is \n");
    printf("%d\n", knapsack(w,weight,profit,n));
    return 0;
}