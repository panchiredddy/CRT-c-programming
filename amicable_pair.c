//amicable_pair checking ie. the sum of factors of the two numbers should be eual expect the itself num
#include<stdio.h>
int main(){
	int n1,n2,i,sum1=0,sum2=0;
	printf("enter the pair:");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<n1;i++){
		if(n1%i==0)
        { 
		sum1=sum1+i; 
	    }
	}
	for(i=1;i<n2;i++){
		if(n2%i==0)
        { 
		sum2=sum2+i; 
	    }
	}
	if(sum1==n2 && sum2==n1){
		printf("%d %d is a amicable_pair",n1,n2);
	}
	else{
		printf("%d %d is not amicable_pair",n1,n2);
	}
}


