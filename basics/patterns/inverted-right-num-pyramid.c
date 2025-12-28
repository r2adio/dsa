/* pattern: inverted number right pyramid
 *
 * example:
    Enter the lenght of inverted number pyramid: 3
    1 2 3
    1 2
    1
 */

#include <stdio.h>
void invert_numPyramid(int len) {
  for (int i = 0; i < len; i++) {
    // for (int j = 0; j < len - i; j++) {
    for (int j = len; j > i; j--) {
      // printf("%d ", len - j);
      printf("%d ", (len - j) + 1);
    }
    printf("%c", '\n');
  }
}

int main(void) {
  int len;
  printf("Enter the lenght of inverted number pyramid: ");
  scanf("%d", &len);

  invert_numPyramid(len);
  return 0;
}
