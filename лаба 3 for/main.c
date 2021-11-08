#include <locale.h>
#include <stdio.h>
#include "header.h"
int main(void) {
	int n = 0;
	int k = 0;
	double sum = 0;
	double eps = 0;
	setlocale(LC_CTYPE, "rus");
	printf("1. Задание 1 \n2. Задание 2 \n3. Задание 3 \n4. Задание 4 \n5. Задание 5 \n6. выход \n");
	switch (getch()) {
	case '1': 
		printf("n=");
		scanf_s("%d", &n);
		sum = summ(n);
		printf("a=");
		printf("Сумма первых %d элементов равна %lf \n", n, sum);
		break;
	case '2':
		printf("введите точность вычисления eps=");
		scanf_s("%lf", &eps);
		sum = summ2(eps);
		printf("Сумма элементов последовательности с точностью eps = %lf равна %lf \n", eps, sum);
		break;
	case '3':
		printf("Введите количество членов последовательности n = ");
		scanf_s("%d", &n);
		printf("Исключать каждый элемент k = ");
		scanf_s("%d", &k);
		print(n, k);
		break;
	case '4':
		printf("Введите eps = ");
		scanf_s("%lf", &eps);
		n = findFirstElement(eps);
		printf("Номер первого элемента последовательности, для которого выполняется |a(i)| <= eps : i = %d \n", n);
		break;
	case '5':
		printf("Введите eps = ");
		scanf_s("%lf", &eps);
		n = findFirstNegativeElement(eps);
		printf("Номер первого отрицательного элемента последовательности, для которого выполняется |a(i)| <= eps : i = %d \n", n);
		break;
	case '6':
		break;
	}
}