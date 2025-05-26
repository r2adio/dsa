#include <cstdio>
void rev_alpha_triangle(int &len) {
  for (int i = 0; i < len; i++) {
    for (char ch = 'A'; ch < 'A' + (len - i); ch++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the length of triangle: ");
  scanf("%d", &len);

  rev_alpha_triangle(len);
}
