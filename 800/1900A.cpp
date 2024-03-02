#include <bits/stdc++.h>
using namespace std;

// Short forms
#define int long long
#define ll long long
#define lld long double
#define ull unsigned long long
#define endl '\n'
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ins insert

// STLs
#define PII pair<int, int>
#define VI vector<int>
#define VVI vector<vector<int>>
#define SI set<int>
#define SC set<char>
#define MII map<int, int>
#define VLL vector<ll>
#define VVL vector<vector<ll>>
#define SL set<ll>

// Outputs
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

// Constants
#define PI 3.141592653589793238
#define INF LONG_LONG_MAX
#define MOD 1e9 + 7

// Faster Input Output
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

// Maths
ll fact(ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll mypow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        b /= 2;
        a = (a * a);
    }
    return ans;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x)         \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#define dbgin(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << "; ";
#else
#define dbg(x)
#define dbgin(x)
#endif

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{   
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0, ct = 0, mx = 0;
    for (char c : s)
    {
        if (c == '.')
        {
            cnt++;
            ct++;
        }
        if (c == '#')
        {
            mx = max(mx, ct);
            ct = 0;
        }
    }
    mx = max(ct, mx);
    if (cnt == 0)
        cout << 0 << endl;
    else if (mx > 2)
        cout << 2 << endl;
    else
        cout << cnt << endl;
}

int32_t main()
{   
    cout<<"Hello world!"<<endl;
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--)
        solve();
}