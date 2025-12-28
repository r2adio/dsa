/* pattern: rectangle star pattern
 *
 * example:
    Enter the length of side of square: 3
    * * *
    * * *
    * * *
 */

#include <stdio.h>
#include <stdlib.h>
// prints the square shape
void sqr(int len) {
  const char star = '*';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      printf("%c ", star);
    }
    printf("\n");
  }
}

// returns matrix of shape square
int **square(int len) {
  int **matrix = malloc(len * sizeof(int *)); // rows
  if (matrix == NULL)
    return NULL;

  for (int i = 0; i < len; i++) {
    matrix[i] = malloc(len * sizeof(int)); // columns
    if (matrix[i] == NULL)
      return NULL;
  }

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      matrix[i][j] = 42; // '*'
    }
  }
  return matrix;
}

int main(void) {
  int len;
  printf("Enter the length of side of square: ");
  scanf("%d", &len);

  sqr(len);
  printf("\n");

  int **sqr = square(len);
  if (sqr != NULL) {
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len; j++) {
        printf("%c ", sqr[i][j]);
      }
      printf("\n");
    }
  }
  // freeing the resources
  for (int i = 0; i < len; i++) {
    free(sqr[i]);
  }
  free(sqr);
  return 0;
}
