#include<stdio.h>
void main()
{
    int i,j,k,n=6;
    for(i=1;i<=n/2;i++)
    {
        k=0;
        while(k<2)
        {
            for(j=1;j<=2*i;j++)
                printf("* ");
            k=k+1;
            printf("\n");
        }
    }
}

// * * 
// * * 
// * * * * 
// * * * * 
// * * * * * * 
// * * * * * * 