#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int weight;
    int height;
} Person;

int main() {
    int n;
    scanf("%d", &n);

    Person* people = (Person*)malloc(n * sizeof(Person));
    if (people == NULL) {

        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &people[i].weight, &people[i].height);
    }

    for (int i = 0; i < n; i++) {
        int rank = 1;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            if (people[j].weight > people[i].weight &&
                people[j].height > people[i].height) {
                rank++;
            }
        }

        printf("%d ", rank);
    }

    printf("\n");

    free(people);

    return 0;
}

