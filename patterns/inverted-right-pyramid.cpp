#include <cstdio>
void invert_pyramid(int &len) {
  char s = '*';
  for (int i = 0; i < len; i++) {
     // for (int j = len; j >= len - i; j--) {
    for (int j = len; j > i; j--) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the length of inverted pyramid: ");
  scanf("%d", &len);

  invert_pyramid(len);
}
