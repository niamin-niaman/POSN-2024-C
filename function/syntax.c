#include <stdio.h>
#include <string.h>

void eg1()
{
  int a ;
  printf("hello from function eg1\n");

}

int eg2()
{
  printf("hello from function eg2\n");
  return 3;
}

int eg3(int arg_1)
{
  printf("hello from function eg3\n");
  printf("arg_1 : %d\n", arg_1);
  return arg_1 + 2;
}

int eg4(int arg_1, int arg_2)
{
  printf("hello from function eg4\n");
  printf("arg_1 : %d\n", arg_1);
  printf("arg_2 : %d\n", arg_2);

  return arg_1 + arg_2;
}

int main()
{

  // eg1();

  // int return_eg2;
  // return_eg2 = eg2();
  // printf("return from eg2 : %d\n", return_eg2);

  // int return_eg3;
  // return_eg3 = eg3(3);
  // printf("return from eg3 : %d\n", return_eg3);

  int return_eg4;
  return_eg4 = eg4(1, 2);
  printf("return from eg4 : %d\n", return_eg4);

  return 0;
}
