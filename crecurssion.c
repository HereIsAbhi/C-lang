#include <stdio.h>
//int sum(int a);
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",sum(n));
//}
//int sum(int a){
//	if (a==1){
//		return 1;
//	}
//	else{
//		return a + sum(a-1);
//	}
//}
int fib(int a);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
}
int fib(int a){
	if (a==1){
		return 0;
	}
	else if(a==2){
		return 1;
	}
	else {
		return a ,fib(a-1);
	}
}
