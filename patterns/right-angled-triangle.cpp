#include <cstdio>
void triangle(int &len) {
  char s = '*';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the lenght of perpendicular of triangle: ");
  scanf("%d", &len);

  triangle(len);
}
