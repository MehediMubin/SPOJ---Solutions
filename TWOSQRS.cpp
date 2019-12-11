#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll num;
        scanf("%lld",&num);
        bool found = false;
        for(ll i = 1; i * i <= num; i++) {
            ll rest = num - 1LL * i * i;
            ll sqr_root = sqrtl(rest);
            if(sqr_root * sqr_root == rest) {
                found = true;
                break;
            }
        }
        if(found) puts("Yes");
        else puts("No");
    }

    return 0;
}
