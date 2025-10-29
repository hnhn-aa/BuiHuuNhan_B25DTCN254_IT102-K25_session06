#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                result = a + b;
                printf("Tong = %.2f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Hieu = %.2f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Tich = %.2f\n", result);
                break;
            case 4:
                if (b != 0)
                    printf("Thuong = %.2f\n", a / b);
                else
                    printf("Khong the chia cho 0!\n");
                break;
            case 5:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while(choice != 5);

    return 0;
}

