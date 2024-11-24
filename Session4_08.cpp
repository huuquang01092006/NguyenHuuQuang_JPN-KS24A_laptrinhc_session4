#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap vao canh thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao canh thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao canh thu ba: ");
    scanf("%d", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac");
    } else {
        printf("Khong phai 3 canh tam giac");
    }
    return 0;
}

