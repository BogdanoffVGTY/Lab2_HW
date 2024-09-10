#include <stdio.h>
#include <locale.h>

void main()
{
	float n = 3., L = 335.;
	setlocale(LC_ALL, "RUS");
	printf("Дано:  %8d\n", n);
	printf("%15d\n", L);
	puts("      _________");
	printf("Ответ: %f", n/L);
}