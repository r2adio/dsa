#include <cstdio>
int revserse_num(int &num) {
  int revNum = 0;
  while (num > 0) {
    int rem = num % 10;
    revNum = (revNum * 10) + rem;
    num = num / 10;
  }
  return revNum;
}

int main(void) {
  int num;
  printf("enter a number: ");
  scanf("%d", &num);

  printf("reverse of number %d is: %d\n", num, revserse_num(num));
  return 0;
}
