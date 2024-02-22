#include <bits/stdc++.h>
using namespace std;

template <typename T> ostream& operator+(ostream& os, const T& t);

template<typename... Ts>
ostream& operator<<(ostream& os,  const pair<Ts...>& p){ return os<<"{"<<p.first<<", "<<p.second<<"}"; }

template<typename C>
enable_if_t<!is_convertible_v<C, string>, ostream&> operator<<(ostream& os,  const C& v){
    os<<"["; for(auto& x:v){os<<x<<", ";} return os<<"]";
}

template<typename... Ts>
ostream& operator<<(ostream& os,  const tuple<Ts...>& tp){
    os<<"{"; apply([&](auto&&... ts){(os + ... + ts);}, tp); return os << "}";
}

template <typename T>
ostream& operator+(ostream& os, const T& t){ return (os << t << ", "); }

template <typename... Ts>
void dispatch(Ts&&... ts){ (std::cout + ... + ts);}

#ifdef DEBUG
#define dbg(x...) {cerr<<"\e[91m"<<__func__<<":"<<__LINE__<<"\t"<<#x<<" = "; dispatch(x); cerr<<"\e[39m"<<endl;}
#else
#define dbg(x...)
#endif

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
}
