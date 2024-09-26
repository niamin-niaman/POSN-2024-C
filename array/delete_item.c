// see visual on slide

#include <stdio.h>

int main() {

  int arr[100] = {0};
  int i, x, pos, n = 10;

  // initial array of size 10
  for (i = 0; i < 10; i++)
    arr[i] = i + 1;

  // print the original array
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  // Input element position to delete
  printf("Enter the element position to delete : ");
  scanf("%d", &pos);

  // Invalid delete position
  if (pos < 0 || pos > n) {
    printf("Invalid position! Please enter position between 1 to %d", n);
  } else {
    // Copy next element value to current element
    for (i = pos - 1; i < n - 1; i++) {
      arr[i] = arr[i + 1];
    }

    // Decrement array n by 1
    n--;
  }

  // print the deleted array
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}