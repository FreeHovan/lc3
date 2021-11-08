#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	for (i; ; i++)
	{
		a = pow(-1, i) * (i + 1) / (pow(2, (i - 1)));
		if (fabs(a) <= eps)
		{
			break;
		}
	}
	return ++i;
}
