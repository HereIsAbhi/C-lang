#include <stdio.h>
//...........call by value method
//int num(int n);
//int main(){
//	int n1;
//	printf("enter a number");
//	scanf("%d",&n1);
//	printf("%d",num(n1));
//	
//}
//int num(int n){
//	if (n%2==0){
//		return n;
//	}
//	else{
//		return 0;
//	}
//		
//}
//.................

int greater(int n1,int n2, int n3);
int main(){
	int n1;
	int n2;
	int n3;
	printf("enter  numbers");
	scanf("%d\n",&n1);
	scanf("%d\n",&n2);
	scanf("%d",&n3);
	printf("%d",greater(n1,n2,n3));
	
}
int greater(int n1,int n2, int n3){
	if (n1>n2){
		if (n1>n3){
			return n1;
		}
		else{
			return n3;
		}
	}
	else {
		if(n2>n3){
			return (n2);
		}
		else{
			return n3;
		}
	}
		
	}
	
//.......................

//int num(int n);
//int main(){
//	int n1;
//	printf("enter a number\n");
//	scanf("%d",&n1);
//	printf("%d",num(n1));
//	
//}
//int num(int n){
//	switch(n){
//		case 1:
//			printf("one");
//			break;
//		case 2:
//			printf("two");
//			break;
//		case 3:
//			printf("three");
//			break;
//		case 4:
//			printf("four");
//			break;
//		case 5:
//			printf("five");
//			break;	
//		default :
//			printf("invalid");
//			
//	}
//		
//}	
		

