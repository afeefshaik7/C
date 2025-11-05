#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0,j;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary representation: ");
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    decimalToBinary(decimalNum);
    return 0;
}

