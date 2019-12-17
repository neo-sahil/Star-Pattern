#include<stdio.h>
void main()
{
    int i,j,n=7;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i!=n){
                if(j==1 || j==i){
                    printf("%d ",j);
                }
                else
                {
                    printf("  ");
                }
            }
            else{
                printf("%d ",j);
            }
            
        }
        printf("\n");
    }
    
}

// 1 
// 1 2 
// 1   3 
// 1     4 
// 1       5 
// 1         6 
// 1 2 3 4 5 6 7 