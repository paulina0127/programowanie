#include <stdio.h>
#include <stdlib.h>


int mniejsza2(int *a, int *b) {
    if (*a < *b)
        return a;
    return b;
}

int main() {
    int a, b;

    printf("Podaj dwie liczby.\n");
    scanf("%d\n%d", &a, &b);

    printf("Mniejsza liczba: %d", mniejsza2(&a,&b));
    return 0;
}
