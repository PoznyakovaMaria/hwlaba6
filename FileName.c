//������� 16
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {

	setlocale(LC_ALL, "RUS");
	int x, y;
	puts("������� �������� ���������� �� OX:");
	scanf_s("%d", &x);
	puts("������� �������� ���������� �� OY:");
	scanf_s("%d", &y);
	if (((x >= 3) && (x <= 6)) && ((y >= 3) && (y <= 6)))
		printf("����� � ������������ (%d, %d) ����������� �������", x, y);
	else
		printf("����� � ������������ (%d, %d) �� ����������� �������", x, y);
}