/* pattern: right angled number pyramid
 *
 * example:
    Enter the lenght of pyramid: 3
    1
    1  2
    1  2  3
 */

#include <stdio.h>
void num_pyramid(int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d  ", j + 1);
    }
    printf("%c", '\n');
  }
}

int main(void) {
  int len;
  printf("%s", "Enter the lenght of pyramid: ");
  scanf("%d", &len);

  num_pyramid(len);
  return 0;
}
