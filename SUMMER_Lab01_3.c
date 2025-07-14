#include <stdio.h> 

int main() {
    int n, m;
    scanf("%d %d", &n, &m); 

    int basket[101];         
    for (int i = 1; i <= n; i++)
        basket[i] = i;   

    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);  

   
        for (int a = 0; a < (j - i + 1) / 2; a++) {
            int temp = basket[i + a];
            basket[i + a] = basket[j - a];
            basket[j - a] = temp;
        }
    }

  
    for (int i = 1; i <= n; i++)
        printf("%d ", basket[i]);
    printf("\n"); 

    return 0; 
}