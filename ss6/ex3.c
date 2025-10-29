#include <stdio.h>

int main(){
	int i, n, sum = 0;
	printf("Moi ban nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	if(n<0){
		printf("Ban can nhap so nguyen duong");
	}else{
	for(i==0;i<=n;i++){
		sum = sum + i;
	}
	printf("Tong cua day so la: %d",sum);
	}
	
	return 0;
}
