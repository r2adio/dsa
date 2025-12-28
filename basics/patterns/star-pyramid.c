/* pattern: star pyramid
 *
 * example:
    Enter the length of star pyramid: 3
        *
      * * *
    * * * * *
 */

#include <stdio.h>
void star_pyramid(int len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < (2 * i) + 1; k++) {
      printf("%c ", s);
    }
    for (int l = i; l < len - 1; l++) {
      printf("%c ", S);
    }
    printf("%c", '\n');
  }
}

int main(void) {
  int len;
  printf("%s", "Enter the length of star pyramid: ");
  scanf("%d", &len);

  star_pyramid(len);
  return 0;
}
