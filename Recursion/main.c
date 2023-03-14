#include <stdio.h>

//iterator 함수
double factorial_iter(int n)
{
	int i;
	double result = 1;

	if (n < 0) printf("Error!! 0 이상의 수를 입력해 주십시오.\n"); // 팩토리얼 정의 n > 0 
	else
	{
		for (i = 1; i <= n; i++)
			result = result * i;
		return result;
	}
}

//Recursion 함수
double factorial_rec(int n)
{
	if (n < 0) printf("Error!! 0 이상의 수를 입력해 주십시오.\n"); // 팩토리얼 정의 n > 0
	else if (n == 0) return 1; // 0! = 1
	else return (n * factorial_rec(n - 1));
}

int main()
{
	int n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);

	printf("%lf\n", result_iter); // iterator 함수 결과
	printf("%lf\n", result_rec); // Recursion 함수 결과

	return 0;
}