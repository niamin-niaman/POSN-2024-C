#include <stdio.h>
int main()
{
    int a[5],i=0;
    for(i = 0; i < 5; i++)
    {
      printf("Enter math score student %d: ", i+5);
      scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
      printf("Student %d : %d\n", i+1, a[i]);
    }
  return 0;
}