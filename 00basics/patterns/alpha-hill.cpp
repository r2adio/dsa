#include <cstdio>
void alpha_hill(int &len) {
  for (int i = 0; i < len; i++) {
    char ch = 'A';
    char S = '-';
    for (int j = i; j < len - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < (2 * i) + 1; k++) {
      printf("%c ", ch);
      if (k < (2 * i + 1) / 2)
        ch++;
      else
        ch--;
    }
    for (int l = i; l < len - 1; l++) {
      printf("%c ", S);
    }
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the length of alpha-hill: ");
  scanf("%d", &len);

  alpha_hill(len);
}
