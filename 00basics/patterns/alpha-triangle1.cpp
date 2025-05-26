#include <cstdio>
void inc_alpha_triangle(int &len) {
  for (int i = 0; i < len; i++) {
    for (char ch = 'E' - i; ch <= 'E'; ch++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the length of alpha triangle: ");
  scanf("%d", &len);

  inc_alpha_triangle(len);
}
