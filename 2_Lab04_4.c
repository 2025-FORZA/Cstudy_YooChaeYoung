#include <stdio.h>
#include <string.h>

int main(void) {
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);

        int visited[26] = { 0 };
        char prev = 0;
        int isGroup = 1; 

        for (int j = 0; j < strlen(word); j++) {
            char now = word[j];
            if (now != prev) {  
                if (visited[now - 'a'] == 1) {
                    isGroup = 0;
                    break;
                }
                visited[now - 'a'] = 1;
            }
            prev = now;
        }
        if (isGroup) count++;
    }

    printf("%d\n", count);
    return 0;
}
