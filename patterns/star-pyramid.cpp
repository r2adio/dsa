#include <cstdio>
void star_pyramid(int &len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < (2 * i) + 1; k++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the length of star pyramid: ");
  scanf("%d", &len);

  star_pyramid(len);
}
