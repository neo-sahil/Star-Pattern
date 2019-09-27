#include<stdio.h>
void main()
{
    int i,j,n=7,k;

    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
            if(j==n)
                break;
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
            if(j==n)
                break;
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
}

// 1 * 2 * 3 * 4 * 5 * 6 * 7 
//   2 * 3 * 4 * 5 * 6 * 7 
//     3 * 4 * 5 * 6 * 7 
//       4 * 5 * 6 * 7 
//         5 * 6 * 7 
//           6 * 7 
//             7 
//           6 * 7 
//         5 * 6 * 7 
//       4 * 5 * 6 * 7 
//     3 * 4 * 5 * 6 * 7 
//   2 * 3 * 4 * 5 * 6 * 7 
// 1 * 2 * 3 * 4 * 5 * 6 * 7 