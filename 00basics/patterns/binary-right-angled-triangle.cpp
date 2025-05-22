#include <cstdio>
void binary_triangle(int &len) {
  int initial;
  for (int i = 0; i < len; i++) {
    if (i % 2 == 0)
      initial = 1;
    else
      initial = 0;
    for (int j = 0; j <= i; j++) {
      printf("%d ", initial);
      initial = 1 - initial;
    }
    printf("%c", '\n');
  }
}

int main() {
  printf("Enter the lenght of binary right triangle: ");
  int len;
  scanf("%d", &len);

  binary_triangle(len);
}
