#include <stdio.h>
int main(){
	check();
	

}

int sign(){ 
	int n;      
	printf("enter the number");
	scanf("%d",&n);
	if(n>0){
		printf("positive\n");
		return n;
	}
	else{
		
		return 0;
//		we need to return n because as default as default it takes 0.
	}
		
	}
	

int check(){
	int s= sign();
	if(s!=0){
	
	if (s%2==0){
		printf("even\n");
	}
	else{
		printf("odd\n");
	}
	     }
	else{
		printf("negative\n");
	}     
}
