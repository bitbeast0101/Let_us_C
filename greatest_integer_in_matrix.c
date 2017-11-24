#include<stdio.h>
#include<math.h>
int main()
{
 int mat[5][5],i,j,gre=0;
 printf("enter 5*5 matrix\n");
 for(i=0;i<5;i++) {
	for(j=0;j<5;j++) {
		scanf("%d",&mat[i][j]);
	}
 }
 for(i=0;i<5;i++) {
	for(j=0;j<5;j++) {
		printf("%d\n",mat[i][j]);
	}
 }
 gre=mat[0][0];
 for(i=0;i<5;i++) {
	for(j=0;j<5;j++) {
		if(mat[i][j]>gre) {
			gre=mat[i][j];
		}
	}
 }	
 printf("greatest integer in matrix is %d",gre);
 return 0;
}
