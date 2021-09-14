/* > DSA > Art-of-Sorting > Selection.c
[================================================================]
| Selection sort
| Works by selecting the smallest element,
| from an unsorted array and moving it to the front.

| Example:- Consider Array {3,1,4,2}
| Q > [3,1,4,2]
| => 1,[3,4,2]
| => 1,2,[4,3]
| => 1,2,3,[4]
| => 1,2,3,4

| Complexity:-
|   > Worst-case : O(n²)
|   > Avg-case   : O(n²)
|   > Best-case  : O(n²)

| Compiling: > gcc Selection.c -o Selection.exe
|            > Selection.exe
|            > 1 2 3 3 4 5
[*/

#include <stdio.h>
int main() {
  int pos, tmp;
  int arr[] = {5, 4, 3, 2, 1, 3};
  int len = sizeof(arr) / sizeof(arr[0]); // Array length

  for (int i = 0; i < len; i++) {
    pos = i;
    for (int j = i + 1; j < len; j++) {

      if (arr[j] < arr[pos]) {
        pos = j; // Current minimum index
      }
    }
    tmp = arr[i];
    arr[i] = arr[pos];
    arr[pos] = tmp;
  }

  for (int i = 0; i < len; i++) { // Display sort array
    printf("%d ", arr[i]);
  }
  return 0;
}