#include <stdio.h>

int main(){
	int a, b, c, choice, entered = 0, min, max;
	do{
	printf("\n-----MENU-----\n");
	printf("1. Nhap 3 so : Nhap 3 so nguyen.\n");
	printf("2. Tong 3 so : Tinh va in trung tong 3 so.\n");
	printf("3. Trung binh cong 3 so : Tinh va in trung binh cong cua 3 so.\n");
	printf("4. So nho nhat : Tim va in so nho nhat trong 3 so.\n");
	printf("5. So lon nhat : Tim va in so lon nhat trong 3 so.\n");
	printf("6. Thoat : Ket thuc chuong trinh.\n");
	printf("Moi ban nhap vao lua chon cua minh\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
			printf("Nhap so a: ");
			scanf("%d",&a);
			printf("Nhap so b: ");
			scanf("%d",&b);
			printf("Nhap so c: ");
			scanf("%d",&c);
			entered = 1;
			break;
		case 2:
			if(!entered){
			printf("Vui long nhap 3 so truoc\n");
			}else{
			printf("Tong 3 so la: %d",a +b + c);
			}
			break;
		case 3:
			if(!entered){
				printf("Vui long nhap 3 so truoc\n");
			}else{
			printf("Trung binh cong 3 so la: %.2f",(a + b + c)/3.0);
			}
			break;
		case 4:
			if(!entered){
				printf("Vui long nhap 3 so truoc\n");
			}else{
				min = a;
				if(b < min) min = b;
				if(c < min) min = c;
				printf("So nho nhat la: %d\n",min);
			}
			break;
		case 5:
			if(!entered){
				printf("Vui long nhap 3 so truoc\n");
			}else{
				max = a;
				if(b > max) max = b;
				if(c > max) max = c;
				printf("So lon nhat la: %d",max);
			}
			break;
		case 6:
			printf("Chuong trinh ket thuc.\n");
			break;
		default:
			printf("Lua chon khong hop le! Vui long chon tu 1 den 6.\n");
	}
	}while ( choice != 6);
	
	return 0;
}
