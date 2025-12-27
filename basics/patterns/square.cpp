#include <cstdio>
void square(int &len) {
  char s = '*';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the length of side of square: ");
  scanf("%d", &len);
  square(len);
}
