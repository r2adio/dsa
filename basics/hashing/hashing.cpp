/* INFO: Hashing
 * combination of steps : pre - storing, and fetching { in vague terms }
 */

/* Question:
 * given an array of integers: [1, 2, 1, 3, 2] and queries: [1, 3, 4, 2, 10]
 * for each query, find out how many times the number appears in array.
 * eg, query: 1 => ans: 2
 */

#include <cstdio>
int main() {
  /* NOTE:
   * size of an int array can only be 1e6 and 1e7,
   * when declared inside and outside of the main function respectively.
   */
  int n;
  printf("enter the no. of elements for given array: ");
  scanf("%d", &n);
  int arr[n];
  printf("the elements of given array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // pre-storing
  int hash[13] = {0}; // hash array
  for (int i = 0; i < n; i++) {
    // for each element arr[i], do hash[arr[i]] += 1
    hash[arr[i]] += 1;
  }

  int q;
  printf("the arr.len for query array: ");
  scanf("%d", &q);
  printf("array of queries: ");
  while (q--) {
    int number;
    scanf("%d", &number);
    // fetch the value of hash[number]
    printf("%d\n", hash[number]);
  }
  return 0;
}

/* Steps for solving the problem:
 * 1. Pre-storing
 *  - create array {name: hash} on size: 13, initialized w/ 0
 *  - in hash array, store freq. of each element of the given array
 *  - iterate over given array
 *  - for each element arr[i], do hash[arr[i]] += 1
 * 2. Fetching
 *  - select each query, i.e. the number and, for the query
 *  - fetch the value of hash[number]
 */
