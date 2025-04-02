/*# include <stdio.h>
int main() {
	int num1, num2, num3, prize, max;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 == num2) {
		if (num2 == num3) {
			prize = 10000 + num2 * 1000;
			printf("%d", prize);
		}
		else {
			prize = 1000 + num2 * 100;
			printf("%d", prize);
		}
	}
	else {
		if (num1 == num3 || num2 == num3) {
			prize = 1000 + num3 * 100;
			printf("%d", prize);
		}
		else {
			if (num1 > num2) {
				if (num1 > num3)
					max = num1;
				else
					max = num3;
			}
			else {
				if (num2 > num3)
					max = num2;
				else
					max = num3;
			}
			prize = max * 100;
			printf("%d", prize);
		}
		
	}
	return 0;
}*/