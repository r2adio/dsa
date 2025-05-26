#include <vector>
int main() {
  std::vector<int> v;

  // generally emplace_back is faster than push_back
  v.push_back(1);
  v.emplace_back(2);
  // v.push_back({1, 2});
  v.emplace_back(1, 2);
  // v.insert(v.end(), 0);

  // vector of pair data type
  std::vector<std::pair<int, int>> vP;
  vP.push_back({1, 2});

  // vector of size:5, and five instances of 100
  std::vector<int> va(5, 100);

  // vector container of size: 5,w/ instances of 0 or some garbage value
  std::vector<int> vA(5);

  // making a copy of a vector and, saving it into another vector
  std::vector<int> V(vA);
}
