 #include <stdio.h>
 #include <string.h>

 /* 정답: 숫자 자릿수를 내림차순으로 정렬해 출력 */
 int main() {
     char s[16];
     if (scanf("%15s", s) != 1) return 0;

     int n = (int)strlen(s);
     for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
             if (s[i] < s[j]) { /* 내림차순 정렬 */
                 char t = s[i];
                 s[i] = s[j];
                 s[j] = t;
             }
         }
     }

     printf("%s\n", s);
     return 0;
 }


