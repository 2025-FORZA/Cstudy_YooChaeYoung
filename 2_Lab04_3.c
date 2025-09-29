/*#include <stdio.h>

int change(int N)
{
	int num1, num2, num3, change_N;
	num1 = N % 10;
	num2 = (N % 100) / 10;
	num3 = N / 100;
	change_N = num1 * 100 + num2 * 10 + num3;

	return change_N;
}
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	int change_A = change(A);
	int change_B = change(B);

	(change_A > change_B) ? printf("%d\n", change_A) : printf("%d\n", change_B);

	return 0;
}*/