#include <stdio.h>

int main(void) {
  int input[] = {4, 2, 1, 5, 3};
  printMaxAndMin(input, sizeof(input) / sizeof(int));
}

void printMaxAndMin(int input[], int size) {
  int i;

  int max = input[0];
  for (i = 1; i < size; i++){
    if(input[i] > max) max = input[i];
  }

  int min = input[0];
  for (i = 1; i < size; i++){
    if(input[i] < min) min = input[i];
  }

  printf("max: %d, min: %d\n", max, min);
}
