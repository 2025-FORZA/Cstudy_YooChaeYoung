#include <stdio.h>  
#include <string.h> 

int main() {
    int k;
    char str[201];        
    char table[20][201];  
    scanf("%d", &k);      
    scanf("%s", str);     

    int len = strlen(str); 
    int row = len / k;     

    int idx = 0;          
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {  
            for (int j = 0; j < k; j++)
                table[i][j] = str[idx++];
        } else {          
            for (int j = k - 1; j >= 0; j--)
                table[i][j] = str[idx++];
        }
    }

   
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < row; i++)
            printf("%c", table[i][j]);
    }
    printf("\n"); 
    return 0;      
}