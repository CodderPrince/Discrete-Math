#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        // Initialize the array to store the result
        long long int a[200005];

        // Generate the first element
        a[0] = 3;

        // Generate the rest of the elements
        for (int i = 1; i < n; i++) {
            a[i] = a[i - 1] + 5; // Increment by 5 to maintain strictly increasing order
        }

        // Output the array
        for (int i = 0; i < n; i++) {
            printf("%lld ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
