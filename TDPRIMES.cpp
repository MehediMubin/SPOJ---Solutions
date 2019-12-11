#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000000

bool marked[MAX + 5];
int counter[MAX + 5];

void sieve ()
{
    marked[1] = 1;
    for (int i = 4; i <= MAX; i += 2) marked[i] = 1;
    for (ll i = 3; i * i <= MAX; i += 2) {
        if (!marked[i]) {
            for (ll j = i * i; j <= MAX; j += i + i) {
                marked[j] = 1;
            }
        }
    }
    int j = 2;
    counter[1] = 2;
    for (int i = 3; i <= MAX; i += 2) {
        if (!marked[i]) {
            counter[j] = i;
            j++;
        }
    }
}

int main ()
{
    sieve();
    for (int i = 1; i < 5761455; i += 100) {
        printf("%d\n", counter[i]);
    }

    return 0;
}
