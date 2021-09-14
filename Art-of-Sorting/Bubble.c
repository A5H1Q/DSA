/* > DSA > Art-of-Sorting > Bubble.c
[================================================================]
| Bubble sort / Sink sort
| Works by repeatedly checking adjacent elements.
| And Swaps them, if they are in wrong order.

| Example:- Consider Array {5,1,4,2}
| Q > 5,1,4,2
| => 1,5,4,2
| => 1,4,5,2
| => 1,4,2,5
| => pass-2
| => 1,2,4,5

| Complexity:-
|   > Worst-case : O(n²)  // When array is reverse sorted.
|   > Avg-case   : O(n²)
|   > Best-case  : O(n)   // Already sorted array.

| Compiling: > gcc Bubble.c -o Bubble.exe
|            > Bubble.exe
|            > 1 2 3 3 4 5
[*/

#include <stdio.h>
int main() {

  int tmp;
  int arr[] = {5, 4, 3, 2, 1, 3};
  int len = sizeof(arr) / sizeof(arr[0]); // Array length
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]); // Display sorted
  }
  return 0;
}