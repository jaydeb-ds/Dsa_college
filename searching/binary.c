#include<stdio.h>
// include<conio.h>
#include<stdlib.h>
 
int main()
{
    int i, begin, end, mid, n, find, arr[15];
    // clrscr();

    printf("Mention the number of elements in the array : \n");
    scanf("\t %d",& n);
    printf("\n Mention the %d elements : \n", n);
    for ( i = 0 ; i < n ; i++ )
        scanf(" \t %d",&arr[i]);
    printf("Mention the element you wish to find in the array : \n");
    scanf("\t %d",&find);
    begin = 0;
    end = n - 1;
    mid = (begin+end)/2;
    while( begin <= end )
    {
        if ( arr[mid] < find )
            begin = mid + 1;
        else if ( arr[mid] == find )
        {
            printf("%d is found at the location %d, in the array\n", find, mid);
            break;
        }
        else
            end = mid - 1;
        mid = (begin + end)/2;
    }
    if ( begin > end )
        printf(" Sorry! %d is not found in the list.\n", find);
 
    // getch();
    return 0;
}