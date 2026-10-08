#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите символы 'a' or 'b': ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;

}