#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0) {
        printf("So %d chia het cho ca 3 v� 5\n", a);
    } else if (a % 3 == 0) {
        printf("So %d chia het cho 3\n", a);
    } else if (a % 5 == 0) {
        printf("So %d chia het cho 5\n", a);
    } else {
        printf("So %d kh�ng chia het cho 3 hoac 5\n", a);
    }
    return 0;
}

