#include <stdio.h>

int main(){
	int n, i, m;
	printf("Moi ban nhap vao mot so nguyen duong tu 1 den 10: ");
	scanf("%d",&n);
	printf("BANG CUU CHUONG %d\n",n);
	if(n<1 || n>10){
		printf("Loi dinh dang, ban can nhap lai");
	}else{
		for(i=1;i<=10;i++){
			m = n * i;
			printf("%d * %d = %d\n",n,i,m);
		}
	}
	
	return 0;
}
