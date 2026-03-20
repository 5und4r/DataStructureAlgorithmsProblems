#include<stdio.h>
int main()
{
    int a[100];
    int i, j, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements into the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\nArray after sorting:\n");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;

}