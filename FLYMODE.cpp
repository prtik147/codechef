#include <iostream>
#include <cstdio>
#include <string>
#include <sstream> 
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <cassert>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define SZ(x) ((int)(x.size()))
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)
#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;

typedef long long ll;
const int INF = 1e9;

const int N = 1e5;
const int H = 1e9;

ll h[N];

int main()
{
    int n;
    scanf("%d", &n);
    assert(n >= 1 && n <= N);
    FOR(i, n) {
        scanf("%lld", &h[i]);
        assert(h[i] >= 0 && h[i] <= H);
        if(i > 0) assert(h[i] != h[i-1]);
    }
    if (n == 1) {
        printf("1\n");
        return 0;
    } else {
        FOR(i, n) h[i] *= 10;
        vector<pair<ll, int>> events;
        if (h[1] > h[0]) {
            events.pb(mp(h[0], 0));
            events.pb(mp(h[1], 1));
        } else {
            events.pb(mp(h[1], 0));
            events.pb(mp(h[0], 1));
        }
        REP(i, 2, n-1) {
            if (h[i] > h[i-1]) {
                events.pb(mp(h[i-1]+1, 0));
                events.pb(mp(h[i], 1));
            } else {
                events.pb(mp(h[i], 0));
                events.pb(mp(h[i-1]-1, 1));
            }
        }
        sort(ALL(events));
        int cur_open = 0;
        int max_open = 0;
        for (auto event : events) {
            ll x = event.fi;
            int etype = event.se;
            if (etype == 0) {
                cur_open++;
            } else {
                cur_open--;
            }
            if (cur_open > max_open) {
                max_open = cur_open;
            }
        }
        printf("%d\n", max_open);
    }

    return 0;
}