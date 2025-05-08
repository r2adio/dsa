#include <iostream>
int main() {
  char s = '*';
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << s << ' ';
    }
    std::cout << '\n';
  }
}
