/* pattern: reverse alpha triangle
 *
 * example:
    Enter the length of triangle: 3
    A B C
    A B
    A
 */

#include <stdio.h>
void rev_alpha_triangle(int len) {
  for (int i = 0; i < len; i++) {
    for (char ch = 'A'; ch < 'A' + (len - i); ch++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of triangle: ");
  scanf("%d", &len);

  rev_alpha_triangle(len);
  return 0;
}
