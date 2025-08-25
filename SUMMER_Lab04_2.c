 #include <stdio.h>

 int main() {
     int used[42] = {0};
     int x, cnt = 0;

     for (int i = 0; i < 10; i++) {
         if (scanf("%d", &x) != 1) return 0;
         int r = x % 42; /* 0~41 범위의 나머지 */
         if (!used[r]) {
             used[r] = 1;
             cnt++;
         }
     }

     printf("%d\n", cnt);
     return 0;
 }


