/* pattern: increasing alpha triangle
 *
 * example:
    Enter the length of triangle: 3
    A
    A B
    A B C
 */

#include <stdio.h>
void increasing_alpha_triangle(int len) {
  for (int i = 0; i < len; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of triangle: ");
  scanf("%d", &len);

  increasing_alpha_triangle(len);
  return 0;
}
