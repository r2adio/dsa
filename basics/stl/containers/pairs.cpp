#include <cstdio>
#include <utility>
int main() {
  std::pair<int, int> p = {1, 3};
  printf("%d %d\n", p.first, p.second);

  // nested property of pairs
  std::pair<int, std::pair<int, int>> q = {1, {2, 3}};
  printf("%d %d %d\n", q.first, q.second.second, q.second.first);

  // using pairs with arrays
  std::pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
  printf("%d\n", arr[1].first);
}
