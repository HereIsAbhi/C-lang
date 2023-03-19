#include<stdio.h>
int main(){
	int n,prod=1,i=1;
	scanf("%d",&n);
	while(i<=n){
		prod*=i;
		i++;
	}
	printf("%d",prod);
//	int i,j;
//	for(i=1;i<=5;i++){
//		printf("%d\n",i);
//	}
	
}
