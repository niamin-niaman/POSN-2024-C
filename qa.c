#include <stdio.h>

int main()
{
    int i = 2147483647;
    long i_ld = 2147483647;

    printf("sizeof(i_ld): %ld\n", sizeof(i_ld));
    printf("sizeof(i): %ld\n", sizeof(i));

    printf("i: %d\n", i);
    i++;
    printf("i: %d\n", i);
    i++;
    printf("i: %d\n", i);

    printf("i_ld: %ld\n", i_ld);
    i_ld++;
    printf("i_ld: %ld\n", i_ld);
    i_ld++;
    printf("i_ld: %ld\n", i_ld);

    return 0;
}