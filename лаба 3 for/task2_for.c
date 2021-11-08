#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i) * (i + 1) / (pow(2, (i - 1)));
	for (i = 0; fabs(a) > eps; i++)
	{
		a = pow(-1, i) * (i + 1) / (pow(2, (i - 1)));
		sum += a;

	}
	return sum;
}
