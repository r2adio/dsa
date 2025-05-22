// Enter the lenght of inverted number pyramid: 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <cstdio>
void invert_numPyramid(int &len) {
  for (int i = 0; i < len; i++) {
    // for (int j = 0; j < len - i; j++) {
    for (int j = len; j > i; j--) {
      // printf("%d ", len - j);
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
