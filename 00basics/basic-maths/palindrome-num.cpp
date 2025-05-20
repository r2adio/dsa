#include <cstdio>
bool palindrome(int &num, int &dup) {
  // void palindrome(int &num, int &dup) {
  int revNum = 0;
  while (num > 0) {
    int rem = num % 10;
    num = num / 10;
    revNum = (revNum * 10) + rem;
  }
  if (dup == revNum)
    return true;
  // printf("true\n");
  else
    return false;
  // printf("false\n");
}

int main() {
  int num;
  int dup = num;
  printf("enter a number, check palindrome: ");
  scanf("%d", &num);

  if (palindrome(num, dup))
    printf("given number %d is a palindrome\n", num);
  else
    printf("%d is not a palindrome\n", num);
  // palindrome(num, dup);
  return 0;
}
