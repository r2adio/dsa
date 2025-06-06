// amstrong number: number equal to sum of its own digits,
// each raised to power of number of digits
#include <cmath>
#include <cstdio>
void amstrong(int &num) {
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

  amstrong(num);
  return 0;
}
