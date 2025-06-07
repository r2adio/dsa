// HCF or Greatest Common Divisor: given 2 numbers, find theirs GCD.
#include <algorithm>
#include <cstdio>
#include <vector>

// Time Complexity : O(log10 N + 1)
// Space Complexity : O(1)
void bruteforce(int &num1, int &num2) {
  std::vector<int> divisor;
  // int limit = (num1 < num2) ? num1 : num2;
  for (int i = 1; i <= std::min(num1, num2); i++) {
    if (num1 % i == 0 && num2 % i == 0)
      divisor.emplace_back(i);
  }
  if (!divisor.empty())
    printf("Greatest Common Divisor is: %d\n", divisor.back());
  else
    printf("No common divisor found.\n");
}

int main() {
  int num1, num2;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);

  bruteforce(num1, num2);
  return 0;
}
