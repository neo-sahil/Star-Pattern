#include<stdio.h>
void main(){
    int i,j,a=1,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a==1?(a=0):(a=1);
        }   
        printf("\n");
    }
}

// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1 
