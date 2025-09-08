#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int score;
	if (scanf("%d", &score) != 1) return 0;

	if (score >= 90) {
		puts("A");
	}
	else if (score >= 80) {
		puts("B");
	}
	else if (score >= 70) {
		puts("C");
	}
	else if (score >= 60) {
		puts("D");
	}
	else {
		puts("F");
	}

	return 0;
}