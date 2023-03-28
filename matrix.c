#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter cols:");
	scanf("%d",&c);
	int a[r][c];
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	
}
