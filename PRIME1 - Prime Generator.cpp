#include <bits/stdc++.h>

using namespace std;

void PrimeGenerator (int m, int n)
{
    for (int i = m; i <= n; i++) {
        if (i == 2) printf("%d\n", 2);
        if (i == 3) printf("%d\n", 3);
        if (i > 3) {
            if (i % 2 != 0) {
                bool b = true;
                for (int j = 3; j <= sqrt(i); j += 2) {
                    if (i % j == 0) {
                        b = false;
                        break;
                    }
                }
                if (b) printf("%d\n", i);
            }
        }
    }
}

int main ()
{
    int T, a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        PrimeGenerator(a, b);
        if (T != 0)
            puts("");
    }

    return 0;
}
