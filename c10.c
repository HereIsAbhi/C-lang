int main() {

//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,l,n,w,h;
    scanf("%d\n",&l);
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d\n",&w,&h);
    
     if (w<l || h<l){
        printf("UPLOAD ANOTHER");
     }
    
     else if(w==h){
        printf("ACCEPTED");
     }
     else {
        printf("CROP IT");
     }
    return 0; 
    }  
}
