#include <cstdio>
void invert_numPyramid(int &len) {
  for (int i = 0; i < len; i++) {
    for (int j = len; j > i; j--) {
      printf("%d ", (len - j) + 1);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the lenght of inverted number pyramid: ");
  scanf("%d", &len);

  invert_numPyramid(len);
}
