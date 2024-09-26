#include <stdio.h>

void eg1_h()
{
    printf("hello from header eg1\n");
}

int eg2_h()
{
    printf("hello from header eg2\n");
    return 2;
}

int eg3_h(int arg_1)
{
    printf("hello from header eg3\n");
    printf("arg_1 : %d\n", arg_1);
    return arg_1 + 2;
}

int eg4_h(int arg_1, int arg_2)
{
    printf("hello from header eg4\n");
    printf("arg_1 : %d\n", arg_1);
    printf("arg_2 : %d\n", arg_2);

    return arg_1 + arg_2;
}
