#include <cstdio>
void crown(int &len) {
  char S = ' ';
  int space = 2 * (len - 1);
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++)
      printf("%d ", j + 1);
    for (int k = 0; k < space; k++)
      printf("%c ", S);
    for (int l = i; l >=0; l--) {
      printf("%d ", l + 1);
    }
    printf("\n");
    space = space - 2;
  }
}

int main() {
  int len;
  printf("Enter the height of crown: ");
  scanf("%d", &len);

  crown(len);
}
