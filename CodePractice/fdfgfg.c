#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[200005];
        scanf("%s", s);

        int l[200005], r[200005];
        for (int i = 0; i < k; i++) {
            scanf("%d", &l[i]);
        }
        for (int i = 0; i < k; i++) {
            scanf("%d", &r[i]);
        }

        int q;
        scanf("%d", &q);
        int x[200005];
        for (int i = 0; i < q; i++) {
            scanf("%d", &x[i]);
        }

        // Perform modifications
        for (int i = 0; i < q; i++) {
            int index = -1;
            for (int j = 0; j < k; j++) {
                if (l[j] <= x[i] && x[i] <= r[j]) {
                    index = j;
                    break;
                }
            }

            if (index != -1) {
                int a = x[i] - l[index];
                int b = r[index] - x[i];
                int len = b - a + 1;
                for (int j = 0; j < len / 2; j++) {
                    char temp = s[l[index] + a + j - 1];
                    s[l[index] + a + j - 1] = s[r[index] - j - 1];
                    s[r[index] - j - 1] = temp;
                }
            }
        }

        printf("%s\n", s);
    }

    return 0;
}

