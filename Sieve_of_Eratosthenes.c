#include <stdio.h>
#define max 1000000

int main(){
	int prime[max]={};

	for (int i = 2; i * i <= max; i++) {
        	if (prime[i] == 0) {
           		 for (int j = i * i; j <= max; j += i) {
                		prime[j] = 1;  // 소수가 아님
            		}
        	}
    	}

	int n;

	scanf("%d", &n);

	if(prime[n]==0) printf("True\n");
	else printf("False\n");

	return 0;
}
