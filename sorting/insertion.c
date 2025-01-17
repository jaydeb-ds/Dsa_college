#include<stdio.h>

int main()
{
    
    int n,i,j,t,a[10];
    
    // inputs
    printf("Enter the number of integers ");
    scanf("%d",&n);
    printf("Enter the integers ");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    // logic
    for ( i = 1; i<n; i++)
    {
        int c= a[i];
        int p = i-1;
        while (p>=0 && a[p]>c)
        {
            a[p+1]=a[p];
            p--;
        }
        a[p+1]=c;
    }
    
   
    

    // output
    printf("The final Sorted array\t");
    for( i = 0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }    


    return 0;
} 


//         int c=a[i]; //current
//         int p=i-1; //previous
