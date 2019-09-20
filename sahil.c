#include<stdio.h>
void main()
{
    int i,j,k;
    int n=6;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("* ");
        }
        for(j=1;j<i;j++)
        {
            printf("%d ",j);
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(k=i;k<=n-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d ",j);
        }
        for(j=n-i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// * * * * * 1 * * * * * 
// * * * * 1 2 1 * * * * 
// * * * 1 2 3 2 1 * * * 
// * * 1 2 3 4 3 2 1 * * 
// * 1 2 3 4 5 4 3 2 1 * 
// 1 2 3 4 5 6 5 4 3 2 1 
// * 1 2 3 4 5 4 3 2 1 * 
// * * 1 2 3 4 3 2 1 * * 
// * * * 1 2 3 2 1 * * * 
// * * * * 1 2 1 * * * * 
// * * * * * 1 * * * * *