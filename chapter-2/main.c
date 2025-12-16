#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    /*int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);*/
}

int main()
{
    int a = 21;
    int b = 17;
    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}
