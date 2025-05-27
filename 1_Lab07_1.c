#include <stdio.h>
int main()
{
	int n, count = 0;
	scanf_s("%d", &n);

	int cow_direction[11];
	for (int i = 0; i <= 10; i++) {
		cow_direction[i] = -1;
	}

	for (int i = 0; i < n; i++) {
		int cow, direction;
		scanf_s("%d %d", &cow, &direction);

		if (cow_direction[cow] == -1) {
			cow_direction[cow] = direction;
		}
		else if (cow_direction[cow] != direction) {
			count++;
			cow_direction[cow] = direction;
		}
	}

	printf("%d\n", count);

	return 0;
}