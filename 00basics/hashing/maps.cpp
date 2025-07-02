#include <cstdio>
#include <iostream>
// #include <map>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int arr[n];
  std::unordered_map<int, int> mpp; // pre compute
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    mpp[arr[i]]++;
  }

  // pre compute
  // std::map<int, int> mpp;
  // for (int i = 0; i < n; i++) {
  //   mpp[arr[i]]++;
  // }

  // iterate in the map
  for (auto it : mpp) {
    std::cout << it.first << " -> " << it.second << '\n';
  }

  int q;
  scanf("%d", &q);
  while (q--) {
    int number;
    scanf("%d", &number);
    // fetch
    std::cout << mpp[number] << '\n';
  }
  return 0;
}
