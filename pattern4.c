#include<stdio.h>
void main()
{
   int i,j,n=7;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
          if(i==j || i==n+1-j)
          {
              printf("1 ");
          }
          else
          {
              printf("  ");
          }
       }
       printf("\n");
   }
}
// 1           1 
//   2       2     for this printf("%d ",i);
//     3   3     
//       4       
//     5   5     
//   6       6   
// 7           7 

// 1           7 
//   2       6      for this printf("%d ",j);
//     3   5     
//       4       
//     3   5     
//   2       6   
// 1           7 

// 1           1 
//   1       1   
//     1   1     
//       1          for this printf("1 ");
//     1   1     
//   1       1   
// 1           1 