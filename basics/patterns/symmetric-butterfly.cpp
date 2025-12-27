#include <cstdio>
void symmetric_butterfly(int &len) {
  char s = '*';
  char S = ' ';
  int spaces = 2 * (len - 1);

  for (int i = 0; i < 2 * len - 1; i++) {
    int stars = (i < len) ? (i + 1) : (2 * len - i - 1);

    // left stars
    for (int j = 0; j < stars; j++)
      printf("%c ", s);

    // spaces
    int space_count = (i < len) ? (2 * (len - i - 1)) : (2 * (i - len + 1));
    for (int j = 0; j < space_count; j++)
      printf("%c ", S);

    // right stars
    for (int j = 0; j < stars; j++)
      printf("%c ", s);

    printf("\n");
  }
}

int main() {
  int len;
  printf("enter the length of butterfly: ");
  scanf("%d", &len);

  symmetric_butterfly(len);
}
