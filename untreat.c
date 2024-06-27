#include<stdio.h>
int main() {
    int t,i;
    scanf("%d", &t);
    int a[t];
    for(i = 0; i < t; i++)
	{
        scanf("%d", &a[i]);
    }
    int freeOfficers = 0;
    int untreatedCrimes = 0;
    for(i = 0; i < t; i++) {
        if (a[i] == -1) {
            if (freeOfficers > 0) {
                freeOfficers--;
            } else {
                untreatedCrimes++;
            }
        } else {
            freeOfficers += a[i];
        }
    }

    printf("%d\n", untreatedCrimes);
    return 0;
}
/*#include<stdio.h>
int main(){
	int t,a[20],untreat=0,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++){
		if (a[i]==-1 && a[i-1]!=1){
			untreat=untreat+1;	
			}
	}
	printf("%d",untreat);
	return 0;

*/
