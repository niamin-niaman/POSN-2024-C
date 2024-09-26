#include <stdio.h>

int main() {

  int arr[] = {1, 2, 3, 4, 5};

  // variable to store size of arr
  int length = sizeof(arr) / sizeof(arr[0]);

  printf("sizeof(arr) : %ld\n", sizeof(arr));
  printf("sizeof(arr[0]) : %ld\n", sizeof(arr[0]));

  printf("The length of the array is: %d\n", length);

  return 0;
}

// see more https://www.geeksforgeeks.org/length-of-array-in-c/?ref=lbp