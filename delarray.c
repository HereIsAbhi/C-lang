#include<stdio.h>
int main(){
	int n;
	int a[n],posi,i,c;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter the values of array");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter position");
	scanf("%d",&posi);
	for(i=posi-1;i<n;i++){
		a[i]=a[i+1];
		
	}
	
	for (i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	
}
