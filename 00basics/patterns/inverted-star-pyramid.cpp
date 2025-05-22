// Enter the length of an inverted pyramid: 5
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include <cstdio>
void inverted_star_pyramid(int &len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < i; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < 2 * len - (2 * i + 1); k++) {
      printf("%c ", s);
    }
    for (int l = 0; l < i; l++) {
      printf("%c ", S);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the length of an inverted pyramid: ");
  scanf("%d", &len);

  inverted_star_pyramid(len);
}
