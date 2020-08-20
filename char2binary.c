//---
// File Name  : practice-git/char2binary.c
// Description: after input a char in decimal(base 10), 
//              compute the total number of digit one of this input's binary(base 2)
// Author     : yu-shan-liang
// Date       : 2019.12.04
// test
//---

#include <stdio.h>
#include <stdlib.h>

int sum_of_digit_one(int n)
{
	int i;
	int bn = 0;

	for (i = 0; n > 0; i++)
	{
		bn += n % 2;
		n  /= 2;
	}
	return bn;
}

int main()
{
	char n;
	int  dec_in;
	int  bn;
	char again;

	do
	{
		printf("Input a decimal number: ");
		scanf_s("%c", &n, 1);

		dec_in = n - '0';
		bn = sum_of_digit_one(dec_in);
		printf("After converting %d to binary, the total number of digit one is: %d\n", dec_in, bn);

		while (getchar() != '\n');
		printf("continue[y/n]?: ");
		scanf_s("%c", &again, 1);
		while (getchar() != '\n');
	} while (again == 'y' || again == 'Y');
  
	return 0;
}
