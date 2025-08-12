#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int min_bags = -1;  
    
    
    for (int five = 0; five <= N / 5; five++) {
        int remaining = N - (5 * five);  
        
        
        if (remaining % 3 == 0) {
            int three = remaining / 3;  
            int total = five + three;  
            
           
            if (min_bags == -1 || total < min_bags) {
                min_bags = total;
            }
        }
    }
    
    printf("%d\n", min_bags);
    
    return 0;
}
