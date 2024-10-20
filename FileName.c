//вариант 16
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {

	setlocale(LC_ALL, "RUS");
	int x, y;
	puts("¬ведите значение координаты по OX:");
	scanf_s("%d", &x);
	puts("¬ведите значение координаты по OY:");
	scanf_s("%d", &y);
	if (((x >= 3) && (x <= 6)) && ((y >= 3) && (y <= 6)))
		printf("“очка с координатами (%d, %d) принадлежит области", x, y);
	else
		printf("“очка с координатами (%d, %d) не принадлежит области", x, y);
}