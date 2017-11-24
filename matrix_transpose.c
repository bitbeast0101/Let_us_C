#include<stdio.h>
int main()
{
 int mat[4][4],i,j,temp;
 printf("enter 4*4 matrix\n");
 for(i=0;i<4;i++) {
	for(j=0;j<4;j++) {
	 	scanf("%d",&mat[i][j]);
	}
 }
  for(i=0;i<4;i++) {
	for(j=0;j<4;j++) {
	 	printf("%d",mat[i][j]);
		printf("\t");
	}
 	printf("\n");
 }
 printf("Transpose of matrix =\n");
 for(i=0;i<4;i++) {
	for(j=i;j<4;j++) {
		temp=mat[i][j];
		mat[i][j]=mat[j][i];
		mat[j][i]=temp;
	 	
	}
 }
 for(i=0;i<4;i++) {
	for(j=0;j<4;j++) {
	 	printf("%d",mat[i][j]);
		printf("\t");
	}
 	printf("\n");
 }

 return 0;
} 
