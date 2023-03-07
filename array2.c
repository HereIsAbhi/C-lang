#include<stdio.h>
int sum(int b[],int size);
int main(){
	int size;
	int i,a[size];
	printf("enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		}
	sum(a,size);	
}
int sum(int b[],int size){
	int i,sum=0;
	for(i=0;i<size;i++){
		sum = sum + a[i];
		}
	printf("%d",sum);	
}
}
