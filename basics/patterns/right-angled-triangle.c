/* pattern: right-angled triangle
 *
 * example:
    Enter the lenght of perpendicular of triangle: 3
    *
    * *
    * * *
 */

#include <stdio.h>
void triangle(int len) {
  char s = '*';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c ", s);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("%s", "Enter the lenght of perpendicular of triangle: ");
  scanf("%d", &len);

  triangle(len);
  return 0;
}
