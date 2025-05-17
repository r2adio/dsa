#include <cstdio>
void show_digit(int &num) {
  std::printf("%s", "all the digits of a num: ");
  int count = 0;
  while (num > 0) {
    int rem = num % 10;
    std::printf("%d ", rem);
    num = num / 10;
    count++;
  }
  std::printf("\n");
  std::printf("no. of digits in a number is: %d\n", count);
}

int main() {
  int num;
  std::printf("Enter a number: ");
  std::scanf("%d", &num);

  show_digit(num);
  return 0;
}
