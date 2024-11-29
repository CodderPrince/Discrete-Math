#include <stdio.h>
#include <algorithm.h>
#include <vector> // Include the vector header

int main() {
  int t, n, i, j, k, min_val;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    std::vector<int> b(n * (n - 1) / 2); // Use std::vector
    for (i = 0; i < n * (n - 1) / 2; i++) {
      scanf("%d", &b[i]);
    }
    std::sort(b.begin(), b.end());
    std::vector<int> a(n); // Use std::vector
    for (i = 0; i < n; i++) {
      min_val = b[0];
      for (j = 0; j < i; j++) {
        if (a[j] == 0) {
          min_val = std::min(min_val, b[j]);
        } else {
          if (a[j] < min_val) {
            min_val = a[j];
          }
        }
      }
      a[i] = min_val;
      for (j = 0; j < i; j++) {
        if (a[j] == min_val) {
          b[j] = b[j] - min_val;
        }
      }
    }
    for (i = 0; i < n; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");
  }
  return 0;
}
