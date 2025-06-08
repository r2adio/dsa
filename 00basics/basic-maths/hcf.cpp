// HCF or Greatest Common Divisor: given 2 numbers, find theirs GCD.
#include <algorithm>
#include <cstdio>
#include <vector>

// Time Complexity : O(log10 N + 1)
// Space Complexity : O(1)
int bruteforce(int &num1, int &num2) {
  std::vector<int> divisor;
  int limit = (num1 < num2) ? num1 : num2;
  for (int i = 1; i <= limit; i++) {
    if (num1 % i == 0 && num2 % i == 0)
      divisor.emplace_back(i);
  }
  int end = divisor.at(divisor.size() - 1);
  return end;
}

// Time Complexity : O(min(N1,N2))
// Space Complexity : O(1)
int decent(int &num1, int &num2) {
  for (int i = std::min(num1, num2); i > 0; i--) {
    if (num1 % i == 0 && num2 % i == 0)
      return i;
  }
  return 1;
}

// Time Complexity : O(min(N1,N2))
// Space Complexity : O(1)
int optimal(int &num1, int &num2) {
  while (num1 > 0 && num2 > 0) {
    if (num1 > num2)
      num1 = num1 % num2;
    else
      num2 = num2 % num1;
  }
  if (num1 == 0)
    return num2;
  else
    return num1;
}

int main() {
  int num1, num2;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("HCF is: %d\n", bruteforce(num1, num2));
  printf("HCF is: %d\n", decent(num1, num2));
  printf("HCF is: %d\n", optimal(num1, num2));
  return 0;
}
