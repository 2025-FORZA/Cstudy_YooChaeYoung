 #include <stdio.h>

 int main() {
     int n;
     if (scanf("%d", &n) != 1) return 0;

     int scores[1000];
     int max = 0;

     for (int i = 0; i < n; i++) {
         scanf("%d", &scores[i]);
         if (scores[i] > max) max = scores[i];
     }

     double sum = 0.0;
     for (int i = 0; i < n; i++) {
         sum += ((double)scores[i] / (double)max) * 100.0;
     }

     printf("%.2f\n", sum / n);
     return 0;
 }


