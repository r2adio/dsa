// amstrong number: number equal to sum of its own digits,
// each raised to power of number of digits
#include <cmath>
#include <cstdio>

// Time Complexity : O(log10 N + 1)
// Space Complexity : O(1)
void bruteforce(int &num) {
  int dup = num;
  int sum = 0;
  while (num != 0) {
    int rem = num % 10;
    num = num / 10;
    sum = sum + std::pow(rem, 3);
  }
  if (sum == dup)
    printf("True\n");
  else
    printf("False\n");
}

int main(int argc, char *argv[]) {
  int num;
  printf("enter a number, check amstrong: ");
  scanf("%d", &num);

  bruteforce(num);
  return 0;
}
