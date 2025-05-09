#include <cstdio>
void num_pyramid(int &len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", i + 1);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Ener the length of pyramid: ");
  scanf("%d", &len);

  num_pyramid(len);
}
