//armstromg number checking-the length of number is powered for every digit and then added .the sum is eq to the initial num
#include<stdio.h>
#include<math.h>
int main(){
	int num,num1,num2,rem,sum=0,l=0;
	printf("enter number:");
	scanf("%d",&num);
	num1=num;
	num2=num;
	while(num1!=0){
		num1=num1/10;
		l++;
	}
	while(num2!=0){
		rem=num2%10;
		sum=sum+pow(rem,l);
		num2=num2/10;
	}
	if (num==sum)
	      printf("the number is an armstrong number");
	else
	      printf("the number is not an armstrong number");
	 
}
