/* pattern: alpha triangle
 *
 * example:
    Enter the length of alpha triangle: 3
    C
    B C
    A B C
 */

#include <stdio.h>
void alpha_triangle(int len) {
  for (int i = 0; i < len; i++) {
    // for (int ch = 69 - i; ch <= 69; ch++) {
    for (int ch = ('@' + len) - i; ch <= ('@' + len); ch++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of alpha triangle: ");
  scanf("%d", &len);

  alpha_triangle(len);
  return 0;
}
