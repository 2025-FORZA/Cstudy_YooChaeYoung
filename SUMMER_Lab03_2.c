
#include <stdio.h>

int main() {
    int x, y;
    
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    
    if (x > 0 && y > 0) {
        printf("1\n");  // 제1사분면
    } else if (x < 0 && y > 0) {
        printf("2\n");  // 제2사분면
    } else if (x < 0 && y < 0) {
        printf("3\n");  // 제3사분면
    } else if (x > 0 && y < 0) {
        printf("4\n");  // 제4사분면
    }
    
    return 0;
}