#include <stdio.h>

//iterator �Լ�
double factorial_iter(int n)
{
	int i;
	double result = 1;

	if (n < 0) printf("Error!! 0 �̻��� ���� �Է��� �ֽʽÿ�.\n"); // ���丮�� ���� n > 0 
	else
	{
		for (i = 1; i <= n; i++)
			result = result * i;
		return result;
	}
}

//Recursion �Լ�
double factorial_rec(int n)
{
	if (n < 0) printf("Error!! 0 �̻��� ���� �Է��� �ֽʽÿ�.\n"); // ���丮�� ���� n > 0
	else if (n == 0) return 1; // 0! = 1
	else return (n * factorial_rec(n - 1));
}

int main()
{
	int n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);

	printf("%lf\n", result_iter); // iterator �Լ� ���
	printf("%lf\n", result_rec); // Recursion �Լ� ���

	return 0;
}