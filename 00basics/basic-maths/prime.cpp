// Prime number:
#include <cstdio>

// Time Complexity : O(N)
// Space Complexity : O(1)
bool bruteforce(int &num) {
  int i = 2;
  while (i < num) {
    if (num % i != 0)
      i++;
    else
      return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  int num;
  printf("Enter a number to check if its prime: ");
  scanf("%d", &num);

  if (bruteforce(num))
    printf("True\n");
  else
    printf("False\n");
  return 0;
}
