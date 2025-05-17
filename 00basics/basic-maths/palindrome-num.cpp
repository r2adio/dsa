#include <cstdio>
// bool palindrome(int &num) {
void palindrome(int &num) {
  int dup = num;
  int revNum = 0;
  while (num > 0) {
    int rem = num % 10;
    num = num / 10;
    revNum = (revNum * 10) + rem;
  }
  if (dup == revNum)
    // return true;
    printf("true\n");
  else
    // return false;
    printf("false\n");
}

int main() {
  int num;
  printf("enter a number, check palindrome: ");
  scanf("%d", &num);

  // if (palindrome(num))
  //   printf("given number %d is a palindrome", num);
  // else
  //   printf("%d is not a palindrome", num);
  palindrome(num);
  return 0;
}
