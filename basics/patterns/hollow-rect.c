/* pattern: hollow rectangle
 *
 * example:
    enter the length of a rectangle: 3
    * * *
    *   *
    * * *
 */

#include <stdio.h>
void hollow_void(int len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      ((i == 0 || j == 0) || (i == len - 1 || j == len - 1)) ? printf("%c ", s)
                                                             : printf("%c ", S);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("enter the length of a rectangle: ");
  scanf("%d", &len);

  hollow_void(len);
  return 0;
}
