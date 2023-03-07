#include<stdio.h>
int main(){
	
	
//	int i,a[5]={1,2,3,4,5};
//	for(i=0;i<5;i++){
//		printf("index %d -%d\n",i,a[i]); 
//	}
//	/........................................
//	int size;
//	int i,a[size];
//	printf("enter the size");
//	scanf("%d",&size);
//	for(i=0;i<size;i++){
//		scanf("%d",&a[i]);
//		
//	}
//	for(i=0;i<size;i++){
//		if(i%2==0)
//		
//		printf("index %d -%d\n",i,a[i]);
//	}
//	int sum=0;
//	for(i=0;i<size;i++){
//		sum = sum + a[i];
//	}
//	printf("sum of array=%d",sum);
///////////................................
	int size;
	int i,a[size],a1[size];
	printf("enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		
	}
	printf("array 1:\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
		
	}
	
	printf("array 2:\n");
	for(i=0;i<size;i++){
		a1[i]=2*a[i];
		
		printf("index %d -%d\n",i,a1[i]);
	}
	
}
