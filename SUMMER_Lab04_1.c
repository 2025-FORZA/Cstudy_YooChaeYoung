 #include <stdio.h>

 int main() {
     int value;
     int max_value = -2147483648; /* initialize to INT_MIN without including limits.h */
     int max_index = 0;

     for (int i = 1; i <= 9; i++) {
         if (scanf("%d", &value) != 1) {
             return 0;
         }
         if (value > max_value) {
             max_value = value;
             max_index = i;
         }
     }

     printf("%d\n%d\n", max_value, max_index);
     return 0;
 }


