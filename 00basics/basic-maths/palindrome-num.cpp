// Palindrome: check if a number is palindrome
#include <cstdio>

// Time Complexity : O(log10 N + 1)
// Space Complexity : O(1)
bool bruteforce(int &num) {
  int revNum = 0;
  int dup = num;
  while (num != 0) {
    int rem = num % 10;
    revNum = (revNum * 10) + rem;
    num = num / 10;
  }
  if (dup == revNum)
    return true;
  else
    return false;
}

int main() {
  int num;
  printf("enter a number, check palindrome: ");
  scanf("%d", &num);

  if (bruteforce(num))
    printf("True\n");
  else
    printf("False\n");
  return 0;
}
