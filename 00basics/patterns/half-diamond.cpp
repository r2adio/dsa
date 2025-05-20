#include <cstdio>
void half_diamond(int &len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < i + 1; j++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
  for (int i = 1; i < len; i++) {
    for (int j = len; j > i; j--) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the length of half diamond: ");
  scanf("%d", &len);

  half_diamond(len);
}
