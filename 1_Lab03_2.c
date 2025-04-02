#include <stdio.h>
int main() {
	int num, i;
	scanf("%d", &num);
	for (i = 1; i <= 9; i += 1) {
		printf("%d * %d = %d", num, i, num * i);
		printf("\n");
	}
	return 0;
}