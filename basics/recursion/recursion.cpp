// NOTE : Recursion
// when a function calls itself until a specified condition it met

#include <cstdio>
void count(int x) {
  // base condition for recursion
  if (x == 9)
    return;
  printf("%d\n", x);
  x++;
  count(x);
}

int main(void) {
  int x = 0;
  count(x);
  return 0;
}
