#include<stdio.h>

int main()
{
    
    int n,i,j,t,a[10];
    int si; //smallestIndex   
    // inputs
    printf("Enter the number of integers ");
    scanf("%d",&n);
    printf("Enter the integers ");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    // logic
 
    for ( i = 0; i<n-1; i++)
    {
        si=i;
        for ( j=i+1; j<n; j++)
        {
            if (a[j]<a[si])
            {
                si=j;
            }
            
        }
        
        t=a[si];
        a[si]=a[i];
        a[i]=t;
        
    }
    

    // output
    printf("The final Sorted array\t");
    for( i = 0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }    


    return 0;
}

//    for ( i = 0; i<n-1; i++)
//     {
//          si=i;
//         for ( j =i+1; j<n; j++)
//         {
//             if(a[j]<a[si])
//             {
//                 si=j;
//             }
//         }

//         t=a[si];
//         a[si]=a[i];
//         a[i]=t;
                
//     }