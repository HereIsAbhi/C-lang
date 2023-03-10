#include<stdio.h>

int sum(int *a,int *b);
int main()
{
	int a1,b1;
	printf("enter a value");
	scanf("%d %d",&a1,&b1);
	int c= sum(&a1,&b1);
	printf("%d",c);
}

int sum(int*a,int *b){
	return *a+*b;
}
//\......................
//int main(){
//	int a=5;
//	int *a1;
//	a1= &a; 
////	a1=&a do both the things
//	printf("value of a=%d\n",*a1);
//	printf("value of a1=%d\n",a1);
//	printf("value of memory of a=%d",a1);
//	
//}

//.........................
//int pali(int *n);
//int main(){
//	int n1;
//	printf("enter no:");
//	scanf("%d",&n1);
//	int c= pali(&n1);
//	printf("%d",c);
//}
//int pali(int *n){
//	int rem,rev=0;
//	while(*n>0){
//		rem=*n%10;
//		rev = rev*10 + rem;
//		*n/=10;
//	}
//	return rev;
////	if(rev==*n){
////		print("reversed no:%d")
////		printf("pali");
////	}
////	else{
////		printf("not pali");
////	}
//}


//................
//int adam(int n);
//prototyping.........
//int main(){
//	int n1;
//	printf("enter no:");
//	scanf("%d",&n1);
//	int c= adam(n1);
//	int sq_no=n1*n1;
//	printf("sq of num:%d\n",sq_no);
//	printf("rev of sq of rev of n1: %d\n",c);
//	if(c==sq_no){
//		printf("adam no");
//		
//	}
//	else{
//		printf("not adam");
//	}
//	
//}
//int adam(int n){
//	int rem,rev=0,rev1=0,rem1;
//	int temp=n;
//	int sq_no=temp*temp;
////	return sq_no;
//	while(n>0){
//		rem=n%10;
//		rev = rev*10 + rem;
//		n/=10;
//	}
//	
////	return rev;
//	int sq_rev= rev*rev;
////	return sq_rev;
//	
//	while(sq_rev>0){
//		rem1=sq_rev%10;
//		rev1 = rev1*10 + rem1;
//		sq_rev/=10;
//	}
//	return rev1;
////	if (rev1==sq_no){
////		return rev1;
////	}
////	else {
////		return ;
////	}
//	
//	}																		
	
	
	
