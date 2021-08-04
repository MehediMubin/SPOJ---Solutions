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

    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        int A = 0, B = 0;
        while (a != 0) {
            int rem = a % 10;
            A = A * 10 + rem;
            a /= 10;
        }

        while (b != 0) {
            int rem = b % 10;
            B = B * 10 + rem;
            b /= 10;
        }

        int sum = A + B;
        int ans = 0;
        while (sum != 0) {
            int rem = sum % 10;
            ans = ans * 10 + rem;
            sum /= 10;
        }
        cout << ans << nl;
    }

    return 0;
}
