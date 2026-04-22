#include<stdio.h>
int main()
{
   int A[3][4], B[3][4];
   //Scanning element for A matrix
   printf("Elementf of A matrix:\n");
   for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
       printf("A[%d][%d]=",i,j);

       scanf("%d",&A[i][j]);

    } printf("\n");
   }
   //Printing elements for A matrix
   printf("A=");

   for(int i=0; i<3; i++){
        printf("\t");
   for(int j=0; j<4; j++) {
    printf("%d ",A[i][j]);
   } printf("\n");

   }
    printf("Elementf of B matrix:\n");
   for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
       printf("B[%d][%d]=",i,j);

       scanf("%d",&B[i][j]);

    } printf("\n");
   }
   //Printing elements for B matrix
   printf("B=");

   for(int i=0; i<3; i++){
        printf("\t");
   for(int j=0; j<4; j++) {
    printf("%d ",B[i][j]);
   } printf("\n");

   }

   return 0;
}

