#include <cstdio>

// Time Complexity: O(2^n), not exponential but near to that.
// Space Complexity: O()
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
  int n;
  printf("enter the index value of fibonacci series: ");
  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
  return 0;
}
