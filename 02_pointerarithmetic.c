#include <stdio.h>

int main() {
  int arr[5];
  int *p;
  int i;

  printf("Enter 5 integers: ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  p = arr;

  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("Address of arr[%d]: %p\n", i, p);
    printf("Value of arr[%d]: %d\n\n", i, *p);
    p++;
  }

  return 0;
}