#include <iostream>
#include <stdio.h>
#include <math.h>

void decimalToHexadecimal(int decimalNumber) {
	char hexadecimal[100];
	int index = 0;

	while (decimalNumber > 0) {
		int remainder = decimalNumber % 16;
		char hexChar = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
		hexadecimal[index] = hexChar;
		index++;
		decimalNumber /= 16;
	}

	if (index == 0) {
		printf("Hexadecimal: 0\n");
	}
	else {
		printf("Hexadecimal: ");
		for (int i = index - 1; i >= 0; i--) {
			printf("%c", hexadecimal[i]);
		}
		printf("\n");
	}
}
void decimalToOctadecimal(int decimalNumber) {
	char octal[100];
	int index = 0;

	while (decimalNumber > 0) {
		int remainder = decimalNumber % 8;
		octal[index] = '0' + remainder;
		index++;
		decimalNumber /= 8;
	}

	if (index == 0) {
		printf("Octal: 0\n");
	}
	else {
		printf("Octal: ");
		for (int i = index - 1; i >= 0; i--) {
			printf("%c", octal[i]);
		}
		printf("\n");
	}
}
int decimalToBinary(int decimalNumber) {
	int binaryNumber = 0;
	int remainder, i = 1;

	while (decimalNumber != 0) {
		remainder = decimalNumber % 2;
		decimalNumber /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}
int binaryToDecimal(long long int n) {
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0) {
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}


int main()
{
	int number1, number2;
	puts("Enter reg and mask: ");
	scanf_s("%d %d", &number1, &number2);
	int result = binaryToDecimal(number1) & binaryToDecimal(number2);
	printf("Number in decimal: %d \nNumber in binary: %d", result, decimalToBinary(result));



	return 0;
}






/*Да се създаде конзолно приложение за преобразуване на цяло число от
десетична в шестнадесетична и осмична бройна система и обратно, като се
използват форматните спецификации %d, %X, %x, %o.*/