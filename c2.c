#include<stdio.h>
int main(){
//	int a;
//	scanf("%d",&a);
//	if (a>0){
//		printf("posi");
//	}
//	else{
//		printf("neg");
//	}	
//....................................................
//	int a;
//	printf("enter number:");
//	scanf("%d",&a);
//	
//	if (a%3==0 && a%5==0){
//		printf("%d is div by 3 and 5",a);
//		
//	}
//	else if(a%3==0 || a%5==0){
//		printf("%d is div by 3 or 5",a);
//	}
//	else{
//		printf("%d is not div by 3 and 5 ",a);
//	}
//............................................................
//	int a,b,c;
////	scanf("%d\n%d\n%d",&a,&b,&c); 
//	printf("enter a:");
//	scanf("%d",&a);
//	printf("enter b:");
//	scanf("%d",&b);
//	printf("enter c:");
//	scanf("%d",&c);
//	if (a>b && a>c){
//		printf("largest no is %d",a);
//	}
//	else if (b>a && b>c){
//		printf("largest no is %d",b);
//	}
//	else if (c>a && c>b){
//		printf("largest no is %d",c);
//	}
//	else {
//		printf("invalid");
//	}
//.........................................................
	int m1,m2,m3,m4,m5;
	scanf("%d\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4,&m5);
	int total= m1+m2+m3+m4+m5;
	printf("total :%d\n",total);
	float a= float(total/5);
	printf("percent is %f \n",a);
	if (a>=80 && a<=100){
		printf("A");
	}
	else if (a>=60 && a<=79){
		printf("B");
	}
	else if (a>=40 && a<=59){
		printf("C");
	}
	else {
		printf("reappear");
	}
//....................................................

//	int a,b,c;
////	printf("enter a:%d\n enter b:%d\n enter c:%d\n",a,b,c);
//	scanf("%d\n%d\n%d",&a,&b,&c);
//	if(a>b&&a>c){
//		if (b>c){
//			printf("2nd largest is %d",b);
//		
//		}
//		else {
//			printf("2nd largest is %d",c);
//		}
//	}	
//	else if(b>a&&b>c){
//		if (a>c){
//			printf("2nd largest is %d",a);
//		}
//		else {
//			printf("2nd largest is %d",c);
//		}	
//	}
//	else if(c>a&&c>b){
//		if (a>b){
//			printf("2nd largest is %d",a);
//		}
//		else {
//			printf("2nd largest is %d",b);
//		}	
//	}
//ternary opt..........
	int n;
	scanf("%d",&n);
	n%2==0?printf("even"):printf("odd");
		
}

