#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HISTORY 50
#define URL_LEN 128

// stack
char pages[MAX_HISTORY][URL_LEN];
int top  = -1;

void push()
{
    if (top == MAX_HISTORY - 1)
    {
        printf("Stack overflow\n");
        return;
    }

    printf("Enter webpage to be pushed: ");

    scanf("%127s", pages[top + 1]);

    top++;

    printf("\nVisited %s\n", pages[top]);
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty (underflow)");
        return;
    }
    else 
    {
        printf("\nRemoved: %s\n",pages[top]);
        top = top -1;
    }
}
void peek()
{
    if(top == -1)
    {
        printf("\nHistroy is empty");
        return;
    }
    else
    {
        printf("\nCurrent page : %s",pages[top]);
    }
}
void display()
{
    int i;
    if (top == -1) {
    printf("\nstack is empty");
    return;
    }
    else
    {
       printf("\nBrowsing histroy (most recent first)\n");
       for(i=top;i>=0;i--)
       {
        printf("%s\n",pages[i]);
       } 
    }
}
int main()
{
    int choice;
    while (1)
    {
        //printf("Enter your choice : ");
        printf("1. Visit a page (push)\n");
        printf("2. Go back (pop)\n");
        printf("3. Visit Current page (peek)\n");
        printf("4. Display history\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : push();
                     break;
            case 2 : pop();
                     break;
            case 3 : peek();
                     break;
            case 4 : display();
                     break;
            case 5 : exit(0);
            default : printf("\nWrong Choice\n");
        }
    }
    return 0;
}
//gcc SelectionSort.c -o SelSort.exe; .\Selsort.exe