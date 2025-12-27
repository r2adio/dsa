#include <algorithm>
#include <cstdio>
void the_number(int &len) {
  for (int i = 0; i < 2 * len - 1; i++) {
    for (int j = 0; j < 2 * len - 1; j++) {
      int top = i;
      int bottom = j;
      int left = (2 * len - 2) - i;
      int right = (2 * len - 2) - j;
      int num = (len - std::min(std::min(top, bottom), std::min(left, right)));
      printf("%d ", num);
    }
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  int len;
  printf("enter the length: ");
  scanf("%d", &len);

  the_number(len);
  return 0;
}
