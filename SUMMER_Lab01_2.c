#include <stdio.h>  

int main() {
    int n;
    scanf("%d", &n);  

    // 윗부분 (중앙 포함)
    for (int i = 1; i <= n; i++) {           
        for (int j = 1; j <= n - i; j++)     
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n");                       
    }

    // 아랫부분
    for (int i = n - 1; i >= 1; i--) {       
        for (int j = 1; j <= n - i; j++)     
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");                        
    }
    return 0; 
}
