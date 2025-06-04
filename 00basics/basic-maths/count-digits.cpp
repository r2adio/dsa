// count digits: counts the number of digits in given number

#include <cmath>
#include <cstdio>

// Time Complexity: O(log10 N+1)
// Space Complexity: O(1)
int bruteforce(int &num) {
  // std::printf("%s", "all the digits of a num: ");
  int count = 0;
  while (num > 0) {
    // int rem = num % 10;
    // std::printf("%d ", rem);
    num = num / 10;
    count++;
  }
  return count;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
int optimal(int &num) {
  int count = log10(num) + 1;
  if (num > 0) {
    return count;
  } else {
    int count = log10(num * -1) + 1;
    return count;
  }
}

int main() {
  int num;
  std::printf("Enter a number: ");
  std::scanf("%d", &num);

  // bruteforce(num);
  std::printf("no. of digits in a number is: %d\n", optimal(num));
  return 0;
}
