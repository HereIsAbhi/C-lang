#include<stdio.h>
//void sum(){
//	int a,b;
//	printf("enter the values");
//	scanf("%d %d",&a,&b);
//	printf("sum=%d",a+b);
//	
//}
//void main(){
//	sum();
//	printf("halo")
//}
//............
//void factor(){
//	int a,i;
//	printf("enter the value");
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		if (a%i==0){
//			printf("%d\n",i);
//		}
//	}
//	
//}
//void main(){
//	factor();
//
//}
//......................
//defining the function...
//declaring a func.....function prototype
//int count(){ 
//	int a,count=0;      
//	printf("enter the value");
//	scanf("%d",&a);
//	while(a!=0){
//		
//		count+=1;
//		a/=10;
//		
//	}
//	return count;
//	
//}
////calling the function....void defines return type ..void dont have return.
//void main(){
//	int c=count();
//	printf("count is %d",c);
//	
//
//}



//....calling the function....void defines return type
int main(){
	int s=sum();
	printf("sum is %d",s);
	

}

int sum(){ 
	int a,n=1,sum=0;      
	printf("enter the number");
	scanf("%d",&a);
	while(n<=a){
		
		sum+=n;
		n++;
		
	}
	return sum;
	
}

