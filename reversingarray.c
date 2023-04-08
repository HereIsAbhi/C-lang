#include<stdio.h>
int main(){
	int i,n;
	int a[n];
	
	scanf("%d",&n);
	for( i=0;i<n;i++)
	 scanf("%d",&a[i]);
	printf("given array:");
	for(i=0;i<n;i++){
	
	 printf("%d ",a[i]);}
	printf("rev array");
	for(i=n-1;i>=0;i--)
	 printf("%d ",a[i]);  
}
