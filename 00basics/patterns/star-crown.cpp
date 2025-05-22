#include <cstdio>
void crown(int &len) {
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++)
      printf("%d ", j + 1);
    for (int k = 0; k <= 2 * (len - 1); k++)
      printf("%c ", S);
    for (int l = 0; l <= i; l++) {
      printf("%d ", l + 1);
    }
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the height of crown: ");
  scanf("%d", &len);

  crown(len);
}
