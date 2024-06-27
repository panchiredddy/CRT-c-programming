#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int main() {
    int wt;
    scanf("%d",&wt);
    if(wt%2==0 && wt>2)
    {
    		printf("Yes\n");
    		printf("2 %d\n", wt - 2);
		
	}
	else
	{
		printf("NO");
			}
    return 0;
}
