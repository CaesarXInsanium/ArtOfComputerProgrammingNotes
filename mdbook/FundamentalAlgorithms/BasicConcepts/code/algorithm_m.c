#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void printarray(int *x, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int m(int *X, int n_) {
  // M1
  int j, k, m, n;
  n = n_;
  j = n;
  k = n;
  m = X[n];
  // M2
  while (k != 0) {
    // M3
    if (X[k] <= m) {
      goto m5;
    }
    // M4
    j = k;
    m = X[k];
    //m5
  m5:
    k -= 1;
  }
  return j;
}

int main(void) {
  int SIZE = 10;
  int *array = (int *)malloc(sizeof(int) * SIZE);
  for (int i = 0; i < SIZE; i++) {
    array[i] = rand();
  }
  int max = m(array, SIZE);
  printarray(array, SIZE);
  printf("Max: %d\n", max);

  int test[] = {1, 2, 3, 2, 1};
  max = m(test, 5);
  printarray(test, 5);
  printf("Max: %d\n", max);
}
