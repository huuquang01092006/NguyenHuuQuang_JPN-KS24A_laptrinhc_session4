#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen thu ba: ");
    scanf("%d", &c);
    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So %d nam trong khoang giua so %d va so %d", c, a, b);
    } else {
        printf("So %d khong nam trong khoang giua so %d va so %d", c, a, b);
    }
    return 0;
}

