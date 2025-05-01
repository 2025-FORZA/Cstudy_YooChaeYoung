#include <stdio.h>

void add();

int main() 
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	add(a, b);
	return 0;
}
void add(int a, int b) 
{
	printf("%d", a+b);
}
