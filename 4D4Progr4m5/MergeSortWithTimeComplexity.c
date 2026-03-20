// clock_t is a typedef for long that represents processor time values (clock ticks), typically returned by functions like clock() and converted to seconds using CLOCKS_PER_SEC.
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

void mergesort(int *, int, int);
void merge(int *, int ,int, int);

void main()
{
    int n,i;
    int a[20];
    float t;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements into the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    clock_t start = clock();
    mergesort(a,0,n-1);
    clock_t end = clock();
    printf("Sorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    t=n*(log(n));
    printf("\nTime Complexity %f : ",t);
    return ;

}

void mergesort(int a[], int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[], int lb, int mid, int ub)
{
    int i,j,k;
    int c[20];
    i=lb;
    k=lb;
    j=mid+1;
    while((i<=mid)&&(j<=ub))
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=ub)
    {
        c[k]=a[j];
        k++;
        j++;
    }
    for(i=lb;i<k-1;i++)
    {
        a[i]=c[i];
    }

}