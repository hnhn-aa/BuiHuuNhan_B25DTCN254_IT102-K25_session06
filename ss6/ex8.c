#include <stdio.h>

int main(){
	int a, b, r, x, y, ucln, bcnn;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	if(a<=0 || b<=0){
		printf("Ban can nhap vao hai so duong");
		return 0;
	}
	x=a, y=b;
	while(y !=0){
		r = x%y;
		x = y;
		y = r;
	}
	ucln = x;
	bcnn = (a*b)/ucln;
	printf("BCNN cua hai so %d va %d la : %d", a, b, bcnn);
	
	return 0;
}

