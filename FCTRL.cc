#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb emplace_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int TrailingZeroes (int n) {
    int ans = 0, power = 5;
    while ((n / power) > 0) {
        ans += n / power;
        power *= 5;
    }

    return ans;
}

int main ()
{
    FastIO;

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        cout << TrailingZeroes(n) << nl;
    }

    return 0;
}
