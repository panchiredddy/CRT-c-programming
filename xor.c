#include<stdio.h>
int main(){
// type 1	
  //	int x=0,n,i;
  //	printf("enter value of n:");
  //	scanf("%d",&n);
  //	for(i=1;i<=n;i++){
  //		x=x^i;
  //	}printf("%d",x);

// typr 2
//    int n;
//    printf("enter value of n:");
//    scanf("%d",&n); 
//    if(n%4==1) printf("%d",1);
//    if(n%4==2) printf("%d",n+1);
//    if(n%4==3) printf("%d",0);
//    if(n%4==0) printf("%d",n);

// type 3 for xor bw to number range
//int x=0,l,i,r;
//printf("lower limit:");
//scanf("%d",&l);
//printf("upper limit:");
//scanf("%d",&r);
//for(i=l;i<=r;i++){
//	x=x^i;
//}
//printf("%d",x);

// type 4 without for loop
//int a,b,l1,l,r,x;
//printf("lower limit:");
//scanf("%d",&l);
//printf("upper limit:");
//scanf("%d",&r);
//    if(r%4==1) a=1;
//    if(r%4==2) a=r+1;
//    if(r%4==3) a=0;
//    if(r%4==0) a=r;
//l1=l-r;
//    if(l1%4==1) b=1;
//    if(l1%4==2) b=l1+1;
//    if(l1%4==3) b=0;
//    if(l1%4==0) b=l1;
//x=a^b;
//printf("%d",x);

//type 5 with using function
int l,r,x=0,n;
int xor(n){
	if(n%4==1) return ("%d",1);
    if(n%4==2) return ("%d",n+1);
    if(n%4==3) return ("%d",0);
    if(n%4==0) return ("%d",n);
}
printf("lower limit:");
scanf("%d",&l);
printf("upper limit:");
scanf("%d",&r);
x=xor(r)^xor(l-1);
printf("%d",x);
	return 0;
}
