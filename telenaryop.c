// printing max value using telenary op
#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max_num= (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);
	printf("%d",max_num);
}
