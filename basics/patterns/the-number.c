/* pattern: the number pattern
 *
 * example:
    enter the length: 3
    3 3 3 3 3
    3 2 2 2 3
    3 2 1 2 3
    3 2 2 2 3
    3 3 3 3 3
 */

#include <stdio.h>
int min(int x, int y) {
  if (x > y)
    return y;
  else
    return x;
}
void the_number(int len) {
  for (int i = 0; i < 2 * len - 1; i++) {
    for (int j = 0; j < 2 * len - 1; j++) {
      int top = i;
      int bottom = j;
      int left = (2 * len - 2) - i;
      int right = (2 * len - 2) - j;
      // int num = (len - std::min(std::min(top, bottom), std::min(left,
      // right)));
      int num = (len - min(min(top, bottom), min(left, right)));
      printf("%d ", num);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("enter the length: ");
  scanf("%d", &len);

  the_number(len);
  return 0;
}
