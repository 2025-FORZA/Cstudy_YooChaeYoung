#include <stdio.h>

void add();

int main()
{
	int a, b, count;
	scanf("%d", &count);
	while (count > 0) {
		scanf("%d %d", &a, &b);
		add(a, b);
		count -= 1;
	}

	return 0;
}
void add(int a, int b)
{
	printf("%d\n", a + b);
}
