#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb emplace_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;

    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        vector <int> v;
        for (int i = a; i <= b; i++) {

            if (i == 2 || i == 3) v.pb(i);
            else if (i == 1 || i % 2 == 0) continue;
            else {
                bool ok = true;
                for (int j = 3; j * j <= i; j += 2) {
                    if (i % j == 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok) v.pb(i);
            }
        }
        for (auto i : v) cout << i << nl;
    }

    return 0;
}
