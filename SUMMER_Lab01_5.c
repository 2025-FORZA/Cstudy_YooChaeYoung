#include <stdio.h>   
#include <stdlib.h>  
#include <string.h>   

typedef struct {
    int age;         
    char name[101];  
    int order;       
} Member;

int compare(const void *a, const void *b) {
    Member *m1 = (Member *)a;
    Member *m2 = (Member *)b;
    if (m1->age != m2->age)
        return m1->age - m2->age;   
    else
        return m1->order - m2->order;
}

int main() {
    int n;
    scanf("%d", &n);               

    Member arr[100000];           

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &arr[i].age, arr[i].name); 
        arr[i].order = i;            
    }

    qsort(arr, n, sizeof(Member), compare); 

  

   
    for (int i = 0; i < n; i++)
        printf("%d %s\n", arr[i].age, arr[i].name);

    return 0; 
}