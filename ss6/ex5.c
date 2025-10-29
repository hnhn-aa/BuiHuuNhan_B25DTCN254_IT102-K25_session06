#include <stdio.h>

int main(){
	int n, i, m;
	for(n=1;n<=9;n++){
		printf("BANG CUU CHUONG %d\n",n);
		for(i=1;i<=10;i++){
			m = n * i;
			printf("%d * %d = %d\n",n,i,m);
		}
	}
	return 0;
}
