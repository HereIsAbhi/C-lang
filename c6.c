#include<stdio.h>
#include<math.h>
int main(){
	int n,sum=0,l_d,temp,p=0;
	
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		n/=10;
		p++;
	}
	n=temp;
	while(n!=0){
		l_d= n%10;
		sum+= pow(l_d,p);
		n/=10;
	}
	printf("%d\n",sum);
	if(temp==sum){
		printf("%d is a armstrong",sum);
	}
	else{
		printf("%d is a not armstrong",sum);
		
	}
	
}
