#include <stdio.h>

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert to binary
    printf("Binary: ");
    int binaryNum[32]; // Assuming 32-bit integers
    int i = 0;
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    // Convert to octal
    printf("Octal: ");
    int octalNum[100]; // Assuming maximum 100 digits for octal
    i = 0;
    decimalNum = decimalNum; // Reset decimalNum to original value
    while (decimalNum > 0) {
        octalNum[i] = decimalNum % 8;
        decimalNum = decimalNum / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");

    // Convert to hexadecimal
    printf("Hexadecimal: ");
    char hexaDecimalNum[100]; // Assuming maximum 100 digits for hexadecimal
    i = 0;
    decimalNum = decimalNum; // Reset decimalNum to original value
    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        if (remainder < 10) {
            hexaDecimalNum[i] = remainder + 48;
        } else {
            hexaDecimalNum[i] = remainder + 55;
        }
        decimalNum = decimalNum / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDecimalNum[j]);
    }
    printf("\n");

    return 0;
}

