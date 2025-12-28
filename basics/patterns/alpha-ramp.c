/* pattern: alpha ramp
 *
 * example:
    Enter the length of ramp: 3
    A
    B B
    C C C
 */

#include <stdio.h>
void alpha_ramp(int len) {
  for (int i = 0; i < len; i++) {
    char ch = 65 + i; // 'A'
    for (int j = 0; j <= i; j++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of ramp: ");
  scanf("%d", &len);

  alpha_ramp(len);
  return 0;
}
