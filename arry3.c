#include<stdio.h>
int main(){
	int i,n;
	
	int a[n],b[n],c[n];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the value of array A");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the value of array B");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<n;i++){
		c[i]=a[i] + b[i];
	}
	printf("the value of array c");
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	
}
