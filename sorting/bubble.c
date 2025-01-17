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

    for ( i = 0; i<n; i++)
    {
        for ( j = 0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
        
    }
    

    

    // output
    printf("The final Sorted array\t");
    for( i = 0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }    


    return 0;
}



//1st iteration
// 4 1 5 2 3 
//1 4 5 2 3
// 1 4 5 2 3 
// 1 4 2 5 3 
// 1 4 2 3 5

// 2nd iteraretion
// 1 4 2 3 5 
// 1 4 2 3 5
// 1 2 4 3 5 
// 1 2 3 4 5

// similarly 3rd and 4th iteration will happen