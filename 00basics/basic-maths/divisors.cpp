// Print all Divisors
#include <cmath>
#include <cstdio>
#include <vector>

// Time Complexity : O(N), iterates through each no. from 1 to num
// Space Complexity : O(N), iterates through each no. from 1 to num
int *bruteforce(int &num, int &size) {
  int *divisors = new int[num];
  int count = 0;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0)
      divisors[count++] = i;
  }
  size = count;
  return divisors;
}

// Time Complexity : O(sqrt(N)), iterates through each no. from 1 to sqrt of num
// Space Complexity : O(sqrt(2*N)), size of arr could go upto 2*sqrt(N)
std::vector<int> optimal(int &num) {
  std::vector<int> divisors;
  int sqrtNum = std::sqrt(num);
  for (int i = 1; i <= sqrtNum; ++i) {
    if (num % i == 0) {
      divisors.push_back(i);
      if (i != num / i) {
        divisors.push_back(num / i);
      }
    }
  }
  return divisors;
}

int main(int argc, char *argv[]) {
  int num;
  int size;
  printf("Enter a value: ");
  scanf("%d", &num);

  int *divisors = bruteforce(num, size);
  printf("Divisors of %d are: ", num);
  for (int i = 0; i < size; i++) {
    printf("%d ", divisors[i]);
  }
  printf("\n");
  delete[] divisors;

  std::vector<int> DIVISORS = optimal(num);
  printf("Divisors of %d are: ", num);
  for (int divisor : DIVISORS) {
    printf("%d ", divisor);
  }
  printf("\n");
  return 0;
}
