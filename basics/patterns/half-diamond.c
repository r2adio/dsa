/* pattern: half diamond star
 *
 * example:
    Enter the length of half-diamond: 3
    *
    * *
    * * *
    * *
    *
 */

#include <stdio.h>
void half_diamond(int len) {
  char s = '*';
  for (int i = 1; i <= 2 * len - 1; i++) {
    int dup = i;
    if (i > len)
      dup = 2 * len - i;
    for (int j = 1; j <= dup; j++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
  // for (int i = 0; i < len; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     printf("%c ", s);
  //   }
  //   printf("%c", '\n');
  // }
  // for (int i = 1; i < len; i++) {
  //   for (int j = len; j > i; j--) {
  //     printf("%c ", s);
  //   }
  //   printf("%c", '\n');
  // }
}

int main(void) {
  int len;
  printf("%s", "Enter the length of half-diamond: ");
  scanf("%d", &len);

  half_diamond(len);
  return 0;
}
