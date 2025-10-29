#include <stdio.h>
int main() {
    int n, dao = 0;

    printf("Nhap so nguyen bat ky: ");
    scanf("%d", &n);

    if (n == 0){
        printf("0\n");
    }
    else if (n < 0){
        printf("- ");
        n = -n;
    }

    int temp = n;
    while (temp > 0){
        dao = dao * 10 + temp % 10;
        temp /= 10;
    }

    while (dao > 0){
        printf("%d ", dao % 10);
        dao /= 10;
    }

    printf("\n");
    return 0;
}

