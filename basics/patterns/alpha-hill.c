/* pattern: alpha hill
 *
 * example:
    Enter the length of alpha-hill: 3
    - - A - -
    - A B A -
    A B C B A
 */

#include <stdio.h>
void alpha_hill(int len) {
  for (int i = 0; i < len; i++) {
    char ch = 65; // 'A'
    char S = 45;  // '-'
    for (int j = i; j < len - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < (2 * i) + 1; k++) {
      printf("%c ", ch);
      if (k < (2 * i + 1) / 2)
        ch++;
      else
        ch--;
    }
    for (int l = i; l < len - 1; l++) {
      printf("%c ", S);
    }
    printf("\n");
  }
}

int main(void) {
  int len;
  printf("Enter the length of alpha-hill: ");
  scanf("%d", &len);

  alpha_hill(len);
  return 0;
}
