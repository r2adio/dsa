/* pattern: increasing number triangle
 *
 * example:
    Enter the length of triangle: 3
    1
    2 3
    4 5 6
 */

#include <stdio.h>
void inc_triangle(int len) {
  int initial = 1;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", initial);
      initial++;
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of triangle: ");
  scanf("%d", &len);

  inc_triangle(len);
  return 0;
}
