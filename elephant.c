#include<stdio.h>
int main(){
    int dist,a,b;
    scanf("%d",&dist);
    a=dist%5;
    b=dist/5;
    if (a!=0)
    {
        printf("%d",b+1);
    }
    else{
        printf("%d",b);
    }
    return 0;    
}
