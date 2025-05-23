#include <cstdio>
void inc_alpha_triangle(int &len) {
  char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c ", alpha[j]);
    }
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the length of triangle: ");
  scanf("%d", &len);

  inc_alpha_triangle(len);
}
