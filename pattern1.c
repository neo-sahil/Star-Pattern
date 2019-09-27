#include<stdio.h>
void main(){
    int i,j,k,n=5;
    for ( i = 1; i <= n; i++)
     {
        for ( j =n; j > i; j--)
            {
                printf(" ");
            }
        int temp = 1;
        for ( k = 1; k <= i; k++)
            {
                printf("%d ", temp);
                temp = temp * (i - k) / (k);
             }
        printf("\n");
 }
}
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 