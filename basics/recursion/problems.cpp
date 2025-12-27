#include <cstdio>
#include <stdio.h>

// PRINT NAME N TIMES
// Time Complexity: O(N)
// Space Complexity: O(N)
void name5(int &i, int &n) {
  if (i > n) {
    return;
  }
  printf("c++11\n");
  // std::string name = "c++11";
  // printf("%s\n", name.c_str()); // converting std::string to a C-style
  // string std::cout << name;

  i++;
  name5(i, n);
}

// PRINT LINEARLY FROM 1 TO N
// Time Complexity: O(N)
// Space Complexity: O(N)
void lin1n(int i, int n) {
  if (i > n) {
    return;
  }
  printf("%d\n", i);
  lin1n(i + 1, n);
}

// PRINT FROM N TO 1
//
//
void linn1(int i, int n) {
  if (i < 1) {
    return;
  }
  printf("%d\n", i);
  linn1(i - 1, n);
}

// PRINT LINEARLY FROM 1 TO N (BY USING BACKTRACK)
//
//
void lin1nB(int i, int n) {
  if (i < 1) {
    return;
  }
  lin1nB(i - 1, n);
  printf("%d\n", i);
}

// PRINT FROM N TO 1 (BY USING BACKTRACK)
//
//
void linn1B(int i, int n) {
  if (i > n) {
    return;
  }
  linn1B(i + 1, n);
  printf("%d\n", i);
}

int main() {
  int n;
  int i = 1;
  printf("enter a number: ");
  scanf("%d", &n);
  name5(i, n);
  printf("################################################\n");
  lin1n(1, n);
  printf("################################################\n");
  linn1(n, n);
  printf("################################################\n");
  lin1nB(n, n);
  printf("################################################\n");
  linn1B(1, n);
  return 0;
}
