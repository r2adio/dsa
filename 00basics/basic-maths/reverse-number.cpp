// Reverse Number : generate the reverse of a given number
#include <climits>
#include <cstdio>

// Time Complexity : O(log10 N + 1)
// Space Complexity : O(1)
int bruteforce(int &num) {
  long long revNum = 0;
  while (num != 0) {
    int rem = num % 10;
    revNum = (revNum * 10) + rem;
    num = num / 10;
  }
  if (revNum > INT_MAX || revNum < INT_MIN)
    return 0;
  return static_cast<int>(revNum);
}

int main(void) {
  int num;
  printf("enter a number: ");
  scanf("%d", &num);

  printf("reverse of number %d is: %d\n", num, bruteforce(num));
  return 0;
}
