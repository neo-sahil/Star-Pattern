#include<stdio.h>
void main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i-1;j++)
        {
            printf("* ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

// 6 5 4 3 2 1 2 3 4 5 6 
// * 6 5 4 3 2 3 4 5 6 
// * * 6 5 4 3 4 5 6 
// * * * 6 5 4 5 6 
// * * * * 6 5 6 
// * * * * * 6 