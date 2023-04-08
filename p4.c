#include<stdio.h>
int main(){
	int a,b;
	a=10; b=11;
	int n1= ++a; 
	int n2= --a;
	n1-=n2;
	printf("%d,%d",n1,n2);
	
}
