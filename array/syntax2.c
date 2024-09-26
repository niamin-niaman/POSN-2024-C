#include <stdio.h>

// multi dimension array
int main()
{

  // creating 2d array
  // int arr2d[2][2] = {1, 2, 3, 4};
  int arr2d[2][2] = {{1, 2}, {3, 4}};

  // printf("%d\n",arr2d[0][0]);
  // printf("%d\n",arr2d[0][1]);
  // printf("%d\n",arr2d[1][0]);
  // printf("%d\n",arr2d[1][1]);

  // printf("2D Array: \n");
  // printing 2d array
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     printf("%d (i:%d ,j:%d) \n", arr2d[i][j], i, j);
  //   }
  //   printf("\n");
  // }

  // creating 3d array
  int arr3d[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

  int count = 1;
  // printf("\n3D Array: \n");
  // printing 3d array
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     for (int k = 0; k < 2; k++) {
  //       printf("%d (i:%d ,j:%d, k:%d)", arr3d[i][j][k], i, j, k);
  //     }
  //     printf("\n");
  //   }
  //   printf("\n");
  // }

  printf("\n3D Array:\n");
  for (int i = 0; i < 2; i++)
  {
    printf("Layer %d:\n", i);
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        printf("%3d ", arr3d[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}