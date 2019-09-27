#include<stdio.h>
void main()
{
    int i,j,prev1=0,prev2=0, prev3=0;
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            if(i==0 &&j==0){
                prev1=0;
                printf("%4d ",prev1);
            }
            else if(i==1 && j==0){
               prev2=1;
                printf("%4d ",prev2);
            }
            else
            {
                prev3=prev2+prev1;
                printf("%4d " ,prev3);
                prev1=prev2;
                prev2=prev3;
            }
        }
        printf("\n");
    }
}

//    0 
//    1    1 
//    2    3    5 
//    8   13   21   34 
//   55   89  144  233  377 