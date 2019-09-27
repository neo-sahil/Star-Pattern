#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i-1;j++)
        {
            printf("  ");
        }
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 