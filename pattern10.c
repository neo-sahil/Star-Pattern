#include<stdio.h>
void main()
{
    int i,j,n=6,N;
    N=n*(n+1)/2;
    int f[N];
    int k=0;
    f[0]=0; f[1]=1;
    for(i=2;i<N;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",f[k]);
            k=k+1;
        }
        printf("\n");
    }
}

// 0 
// 1 1 
// 2 3 5 
// 8 13 21 34 
// 55 89 144 233 377 
// 610 987 1597 2584 4181 6765 