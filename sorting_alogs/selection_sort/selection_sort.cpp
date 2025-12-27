/* INFO: SELECTION SORT
 * traverse the complete unsorted array, from 0 to n-1
 * in each iteration, select min elements
 * swap the min element w/ first element of selected range
 * after every iteration, starting index of range +1
 */

/* Question:
 * array of N int, implement the selection_sort algo
 */

#include <cstdio>
/* Time complexity: O(N^2)
 *
 * Space complexity: O(1)
 */
void selection_sort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int n;
  printf("enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("elements of array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  selection_sort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
