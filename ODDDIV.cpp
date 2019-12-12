#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000

bitset <MAX + 5> marked;
vector <int> prime;
vector <ll> dv[1500];

void sieve ()
{
    marked.reset();
    marked[1] = 1;
    for (int i = 4; i <= MAX; i += 2) marked[i] = 1;
    for (int i = 3; i * i <= MAX; i += 2) {
        if (!marked[i]) {
            for (int j = 2 * i; j <= MAX; j += (i + i))
                marked[j] = 1;
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (!marked[i]) prime.push_back(i);
    }
}

void DivCounter ()
{
    for (int i = 1; i <= MAX; i++) {
        int nod = 1;
        int N = i;
        for (int j = 0; j < (int)prime.size() && prime[j] * prime[j] <= N; j++) {
            if (N % prime[j] == 0) {
                int alpha = 0;
                while (N % prime[j] == 0) {
                    N /= prime[j];
                    alpha++;
                }
                nod *= (2 * alpha) + 1;
            }
        }
        if (N > 1) nod *= 3;
        dv[nod].push_back(1LL * i * i);
    }
}

int main ()
{
    sieve();
    DivCounter();
    int T;
    scanf("%d", &T);
    while (T--) {
        ll k, low, high;
        scanf("%lld %lld %lld", &k, &low, &high);
        if (k > 1323) puts("0");
        else
            printf("%d\n", upper_bound(dv[k].begin(), dv[k].end(), high) - lower_bound(dv[k].begin(), dv[k].end(), low));
    }

    return 0;
}
