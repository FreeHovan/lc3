#include <locale.h>
#include <stdio.h>
#include "header.h"
int main(void) {
	int n = 0;
	int k = 0;
	double sum = 0;
	double eps = 0;
	setlocale(LC_CTYPE, "rus");
	printf("1. ������� 1 \n2. ������� 2 \n3. ������� 3 \n4. ������� 4 \n5. ������� 5 \n6. ����� \n");
	switch (getch()) {
	case '1': 
		printf("n=");
		scanf_s("%d", &n);
		sum = summ(n);
		printf("a=");
		printf("����� ������ %d ��������� ����� %lf \n", n, sum);
		break;
	case '2':
		printf("������� �������� ���������� eps=");
		scanf_s("%lf", &eps);
		sum = summ2(eps);
		printf("����� ��������� ������������������ � ��������� eps = %lf ����� %lf \n", eps, sum);
		break;
	case '3':
		printf("������� ���������� ������ ������������������ n = ");
		scanf_s("%d", &n);
		printf("��������� ������ ������� k = ");
		scanf_s("%d", &k);
		print(n, k);
		break;
	case '4':
		printf("������� eps = ");
		scanf_s("%lf", &eps);
		n = findFirstElement(eps);
		printf("����� ������� �������� ������������������, ��� �������� ����������� |a(i)| <= eps : i = %d \n", n);
		break;
	case '5':
		printf("������� eps = ");
		scanf_s("%lf", &eps);
		n = findFirstNegativeElement(eps);
		printf("����� ������� �������������� �������� ������������������, ��� �������� ����������� |a(i)| <= eps : i = %d \n", n);
		break;
	case '6':
		break;
	}
}