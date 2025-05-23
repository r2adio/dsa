#include <cstdio>
void alpha_hill(int &len) {
  char S = ' ';
  char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len - i - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k <= i; k++) {
      printf("%c ", alpha[k]);
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
