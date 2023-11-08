#include <stdio.h>


void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}


void decimalToOctal(int decimal) {
    int octal[32];
    int i = 0;

    if (decimal == 0) {
        printf("Octal: 0\n");
        return;
    }

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}


void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;

    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = '0' + remainder;
        } else {
            hexadecimal[i] = 'A' + remainder - 10;
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal: 0x");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    int choice;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Choose the conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("Enter 1, 2, or 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decimalToBinary(decimal);
            break;
        case 2:
            decimalToOctal(decimal);
            break;
        case 3:
            decimalToHexadecimal(decimal);
            break;
        default:
            printf("Invalid choice. Please enter 1, 2, or 3 for the conversion.\n");
            return 1; // Exit with an error code
    }

    return 0;
}
