#include<stdio.h>
void main(){
	int row,col,i,j;
	for( i=1;i<=row;i++){
		for ( j=1;j<=col;j++){
			if(j==1||j==col||i==1||i==row){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
	} 
}

