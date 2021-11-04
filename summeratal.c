#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
        return ( *(int*)a - *(int*)b );
}
int main() {
    int n;
    if (scanf("%i", &n) == 1) {
        int *lista = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if (scanf("%i", &lista[i]) == 1) {}
    }

    qsort(lista, n, sizeof(int), cmpfunc);
    int sum = 0;

    for (int i = n/2; i < n; i++)
    {
        sum = lista[i] + sum;
    }
    printf("%i", sum);
    free(lista);
    }

    return 0;
}
