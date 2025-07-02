// NOTE: Hashing:
// - pre-storing/fetching {in vague terms}

#include <cstdio>
int main() {
  // array of size 5, {1,3,2,1,3}
  // numbers for whom i require how many times they appear,
  // 5: 1, 4, 2, 3, 12
  // no. of queries: the queries
  int n;
  scanf("%d", &n);
  // size of an int array can only be 1e6 and 1e7, when declared inside and
  // outside of the main function respectively.
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // precompute
  int hash[13] = {0}; // hash array
  for (int i = 0; i < n; i++) {
    // for array element, go to that array index and do +1
    hash[arr[i]] += 1;
  }

  int q;
  scanf("%d", &q);
  while (q--) {
    int number;
    scanf("%d", &number);
    // fetch
    printf("%d\n", hash[number]);
  }
  return 0;
}
