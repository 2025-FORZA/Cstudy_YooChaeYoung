/*#include <stdio.h>
int main() {
	int year;
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	return 0;
}*/

/*윤년:(연도가 4의 배수 -> 100의 배수 X) or 400의 배수
윤년이면 1, 아니면 0*/