/* > DSA > Ways-of-Searching > Linear.c
[================================================================]
| Linear search / Sequential search
| Works by sequentially checking each element.

| Complexity:-
|   > Worst-case : O(n) // Match at end.
|   > Avg-case   : O(n)
|   > Best-case  : O(1) // Match at the Start.

| Compiling: > gcc Linear.c -o Linear.exe
|
[*/

#include <stdio.h>
int main() {
  int item;
  int flag = 0;
  int arr[] = {8, 1, 5, 7, 2, 0, 5};
  int len = sizeof(arr) / sizeof(arr[0]); // Array length
  printf("Enter Item: ");
  scanf("%d", &item);

  for (int i = 0; i < len; i++) {
    if (arr[i] == item) { // Match Found
      printf("Match Found at Index %d", i);
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    printf("Match not Found");
  }
  return 0;
}