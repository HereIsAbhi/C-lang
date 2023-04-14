//linear search..
#include<stdio.h>

int main(){
	int a[6]={2,3,4,5,6,7};
	int i,loc=-1,key;
	printf("enter the value u need to search");
	scanf("%d",&key);
	for(i=0;i<6;i++){
		if(a[i]==key){
			loc= i+1;
			break;
		}
	}
	if(loc!=-1){
		printf("element  found at %d",loc);
	}
	else printf("not found");
}
