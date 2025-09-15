#include <stdio.h>
int main() {
	int n;
	int i = 0;
	int sum = 0;

	scanf("%d", &n);

	int new_n = n;

	while (1) {
		if (new_n >= 10) {
			sum = n / 10 + n % 10;
			new_n = (n % 10) * 10 + (sum % 10);
		}
		else {
			new_n = n * 10 + n;
		}

		i++;

		if (new_n == n) {
			printf("%d\n", i);
			break;
		}
	}
	

	return 0;
}

/*10이상
1. 각자리수 더하기
	어떻게 더하게 할 것이냐
	숫자 입력 시 -> int형 취급 -> 한글자씩 분리 불가
	-> 문자열로 입력받기 -> 중간에 숫자로 바꾸어 합 구하기
2. 주어진 수 오른쪽 숫자와 더한값 오른쪽 숫자 -> 새로운 수
*/
/*10미만
	9 -> 09 -> 9 -> 99 -> 18 -> 98*/