#include <stdio.h>
#define m 1000000007
int main(){
	int n,i;
	scanf("%d", &n);
	int c[n];
	long int a=1;
	for(i=0;i<=n;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++){
		a=(a*c[i])% m;
	}
	printf("%ld",a);
}
