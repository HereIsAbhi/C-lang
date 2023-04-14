//binary search..
#include<stdio.h>
int main(){
//	int a[8]={11,20,22,44,56,77,88,90};
//	int mid,loc=-1,key,beg=0,last=7;
//	printf("enter the value u need to search");
//	scanf("%d",&key);
//	while(beg<=last){
//		mid= (beg+last)/2;
//		if(a[mid]==key){
//			loc=mid;
//			break;
//		}
//		else if(a[mid]>key){
//			last=mid-1;
//		}
//		else if(a[mid]<key){
//			beg= mid+1;
//		}

//}
//	if(loc!=-1){
//		printf("element found at %d",loc+1);
//	}
//	else printf("not found");
	
//	.....
	int n,i,key,mid,loc=-1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	int beg=0,last= n-1;
	while(beg<=last){
		mid= (beg + last)/2;
		if(a[mid]==key){
		
			loc= mid;
			break;
		}
		else if(key>a[mid]){
			beg= mid+1;
		}
		else{
			last= mid-1;
		}
	}
	if(loc!=-1){
		printf("element at %d",loc+1);
	}
	else
		printf("not found");
	

}
