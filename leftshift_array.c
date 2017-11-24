//LEFT SHIFTING OF AN ARRAY//
#include<stdio.h>
int leftshift(int *j,int i) {
 int x,y,temp,nshift;
 printf("before shifting\n");
 for(x=0;x<i;x++) {
	printf("%d\n",*(j+x));
 }
printf(" Number of times to be shifted");
scanf("%d",&nshift);
printf("after shifting\n");

for(x=0;x < nshift;x++) {
 temp=*j;
	for(y=0;y<i;y++) {
	*(j+y)=*(j+y+1);
	*(j+i)=temp;
}

}
 for(x=0;x<i;x++) {
	printf("%d\n",*(j+x));
 }
}
int main()
{
 int arr[100],a,num ;
 printf("enter number of inputs");
 scanf("%d",&num);
 for(a=0;a<num;a++) {
	scanf("%d",&arr[a]);
}
 leftshift(&arr[0],num);
 return 0;
} 
