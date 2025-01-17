#include<stdio.h>
// #include<conio.h>

int main()
{
   
    int a[10],i,n,num;
    // clrscr()

    printf("Enter the number of element in array ");
    scanf("%d",&n);

    printf("Enter the array numbers ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the target number ");
    scanf("%d",&num);
    for ( i = 0; i <n; i++)
    {
        if (a[i]==num)   
        {
            printf("Number found in the location %d",i+1);
            break;
        }
       
    }
    if (i>=n)
    {
        printf("\n Item is not found");
    }

    // getch()
    return 0;
}