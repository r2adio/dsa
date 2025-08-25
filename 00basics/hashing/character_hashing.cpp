/* Question:
 * given string: "abcdabefc", queries: [a, c, z]
 * for each query, find the times the char appears in string.
 * eg, query:'a' => ans:2
 */

#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  // pre-storing
  // int hash[26] = {0}; // for eower-case || upper-case
  int hash[256] = {0}; // for eower-case && upper-case
  for (int i = 0; i < s.size(); i++) {
    // hash[s[i] - 'a']++;
    hash[s[i]]++;
  }

  int q;
  std::cin >> q;
  while (q--) {
    char c;
    std::cin >> c;
    // fetch
    // std::cout << hash[c - 'a'] << '\n';
    std::cout << hash[c] << '\n';
  }
  return 0;
}
