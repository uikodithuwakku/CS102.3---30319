#include<stdio.h>
int main()
{
 int i,j;
 int array1[3][3] = {3,2,4,1,4,6,4,3,2};
 int array2[3][3] = {2,6,3,4,3,2,5,1,7};
 int sum[3][3];
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d ",array1[i][j]);
     }
     printf("\t ");

     for(j=0;j<3;j++)
     {
         printf("%d ",array2[i][j]);
     }
     printf("\t ");

     for(j=0;j<3;j++)
     {
         printf("%d ",array1[i][j] + array2[i][j]);
     }
     printf("\n");
 }

}


