#include <cstdio>
void symmetric_void(int &len) {
  char s = '*';
  char S = ' ';
  // top portion of pattern
  int spaces = 0;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i; j++)
      printf("%c ", s);
    for (int k = 0; k < spaces; k++) {
      printf("%c ", S);
    }
    for (int j = 0; j < len - i; j++)
      printf("%c ", s);
    spaces += 2;
    printf("\n");
  }
  // bottom portion of pattern
  spaces = (len * 2) - 2;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j <= i; j++)
      printf("%c ", s);
    for (int k = 0; k < spaces; k++) {
      printf("%c ", S);
    }
    for (int j = 0; j <= i; j++)
      printf("%c ", s);
    spaces -= 2;
    printf("\n");
  }
}

int main() {
  int len;
  printf("Enter the length of symmetric void: ");
  scanf("%d", &len);

  symmetric_void(len);
}
