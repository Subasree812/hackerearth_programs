#include <stdio.h>

int main(){
	int n = 0,f=0,i;
	scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
		if (a[i]%10==0){
			f=1;
		}
		else{
			f=0;
		}
	}
	if (f==1){
		printf("Yes");
	}
	else{
		printf("No");
	}
    
    return 0;
}

/*Explanation
Last digit of 85 is 5.
Last digit of 25 is 5.
Last digit of 65 is 5.
Last digit of 21 is 1.
Last digit of 84 is 4.
Therefore the number formed is 55514 which is not divisible by 10.*/
