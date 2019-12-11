#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll divCounter (int n)
{
    ll divSum = 1;
    if (n == 1) return 0;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n)
                divSum += i;
            else
                divSum = divSum + i + (n / i);
        }
    }

    return divSum;
}

int main ()
{
    int T, n;
    ll ans = 0;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        ans = divCounter(n);
        printf("%lld\n", ans);
    }

    return 0;
}
