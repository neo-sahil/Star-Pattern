#include<stdio.h>
void main()
{
    int i,j;
    int n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=1;j<=2*n-2*i;j++)
        {
            printf("* ");
        }
         for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
// 1 * * * * * * * * * * 1 
// 1 2 * * * * * * * * 1 2 
// 1 2 3 * * * * * * 1 2 3 
// 1 2 3 4 * * * * 1 2 3 4 
// 1 2 3 4 5 * * 1 2 3 4 5 
// 1 2 3 4 5 6 1 2 3 4 5 6 