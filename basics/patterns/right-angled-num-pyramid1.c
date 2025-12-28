/* pattern: right angled pyramid - I
 *
 * example:
    Ener the length of pyramid: 3
    1
    2 2
    3 3 3
 */

#include <stdio.h>
void num_pyramid(int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", i + 1);
    }
    printf("%c", '\n');
  }
}

int main(void) {
  int len;
  printf("%s", "Ener the length of pyramid: ");
  scanf("%d", &len);

  num_pyramid(len);
  return 0;
}
