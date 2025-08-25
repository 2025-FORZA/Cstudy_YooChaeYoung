 #include <stdio.h>

 int main() {
     int T;
     if (scanf("%d", &T) != 1) return 0;

     for (int tc = 0; tc < T; tc++) {
         char s[100];
         if (scanf("%s", s) != 1) return 0;

         int streak = 0;
         int total = 0;
         for (int i = 0; s[i] != '\0'; i++) {
             if (s[i] == 'O') {
                 streak++;
                 total += streak;
             } else {
                 streak = 0;
             }
         }
         printf("%d\n", total);
     }

     return 0;
 }


