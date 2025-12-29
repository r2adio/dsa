// PRINT THE SUMMATION OF ALL N NO. (from n to 1)

#include <cstdio>
void parameterised_summation(int i, int sum) {
  if (i < 1) {
    printf("%d\n", sum);
    return;
  }
  parameterised_summation(i - 1, sum + i);
}

int functional_summation(int n) {
  if (n == 0) {
    return 0;
  }
  return n + functional_summation(n - 1);
}

int main(void) {
  // int sum = 0;
  // int n;
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++) {
  //   sum += i;
  // }
  // printf("%d\n", sum);

  int n;
  printf("enter a natural number: ");
  scanf("%d", &n);
  parameterised_summation(n, 0);
  printf("%d\n", functional_summation(n));

  // int prod = 1;
  // for (int i = 1; i <= n; i++) {
  //   prod *= i;
  // }
  // printf("%d\n", prod);
  return 0;
}
