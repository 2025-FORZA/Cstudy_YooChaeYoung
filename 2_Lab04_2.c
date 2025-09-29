/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	long long N;
	scanf("%lld", &N);

	long long count = 10;

	while (N >= count) {
		if (N % count >= count / 2)
			N = (N / count + 1) * count;
		else
			N = (N / count) * count;

		count *= 10;
	}

	printf("%lld\n", N);
	return 0;
}*/