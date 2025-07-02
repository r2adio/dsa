#include <cstdio>
#include <iostream>
#include <string>

int main() {
  // char *s;
  // scanf("%255s", s);
  std::string s;
  std::cin >> s;

  // pre compute
  // int hash[26] = {0}; // for lower case letters only
  int hash[2560];
  for (int i = 0; i < s.size(); i++) {
    // hash[s[i] - 'a']++;
    hash[s[i]]++;
  }

  int q;
  scanf("%d", &q);
  while (q--) {
    char c;
    scanf("%c", &c);
    // fetch
    // std::cout << hash[c - 'a'] << '\n';
    std::cout << hash[c] << '\n';
  }
  return 0;
}
