#include <stdio.h>
int main() {
	long long n;
	long long minBags = -1;
	if (scanf_s("%lld", &n) != 1) return 0;

	for (long long fiveBags = n / 5; fiveBags >= 0; --fiveBags) {
		long long remain = n - 5 * fiveBags;
		if (remain % 3 == 0) {
			minBags = fiveBags + (remain / 3);
			break;
		}
	}

	printf("%lld\n", minBags);
	return 0;
}