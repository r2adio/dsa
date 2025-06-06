// palindrome: check if a number is palindrome

#include <cstdio>
void palindrome(int &num) {
  int revNum = 0;
  int dup = num;
  while (num != 0) {
    int rem = num % 10;
    revNum = (revNum * 10) + rem;
    num = num / 10;
  }
  if (dup == revNum)
    printf("True\n");
  else
    printf("False\n");
}

int main() {
  int num;
  printf("enter a number, check palindrome: ");
  scanf("%d", &num);

  palindrome(num);
  return 0;
}
