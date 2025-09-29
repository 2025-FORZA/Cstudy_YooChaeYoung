/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h> //strcpy 사용 위해

int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	char name[21];
	int N;
	scanf("%s", name);
	scanf("%d", &N);

	// 동적 할당
	char** arr = (char**)malloc(N * sizeof(char*));
	for (int i = 0; i < N; i++) {
		arr[i] = (char*)malloc(21 * sizeof(char));
	}

	// 문자열 입력
	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i]);
	}

	char Max[21]="";
	int maxPer = -1;

	for (int i = 0; i < N; i++) {
		int n_L = 0, n_O = 0, n_V = 0, n_E = 0;

		for (int j = 0; j < strlen(name); j++) {
			if (name[j] == 'L') n_L++;
			else if (name[j] == 'O') n_O++;
			else if (name[j] == 'V') n_V++; 
			else if (name[j] == 'E') n_E++; 
		}

		for (int j = 0; j < strlen(arr[i]); j++) {
			if (arr[i][j] == 'L') n_L++;
			else if (arr[i][j] == 'O') n_O++;
			else if (arr[i][j] == 'V') n_V++;
			else if (arr[i][j] == 'E') n_E++;
		}

		int Per = ((n_L + n_O) * (n_L + n_V) * (n_L + n_E) * (n_O + n_V) * (n_O + n_E) * (n_V + n_E)) % 100;

		if (Per > maxPer) {
			maxPer = Per;
			strcpy(Max, arr[i]); // Max 문자열 담을 때의 문제 해결
		}
		else if (Per == maxPer) {
			// 같을 경우 해결 스택
			if (strcmp(arr[i], Max) < 0)
				strcpy(Max, arr[i]);

		}
	}

	printf("%s\n", Max);


	for (int i = 0; i < N; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}*/