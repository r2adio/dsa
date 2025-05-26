#include <cstdio>
void alpha_ramp(int &len) {
  // char ch = 'A';
  for (int i = 0; i < len; i++) {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++) {
      printf("%c ", ch);
    }
    printf("\n");
    // ch++;
  }
}

int main() {
  int len;
  printf("Enter the length of ramp: ");
  scanf("%d", &len);

  alpha_ramp(len);
}
