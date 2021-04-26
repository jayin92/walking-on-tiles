#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<double,double> pdd;
#define SQ(i) ((i)*(i))
#define MEM(a, b) memset(a, (b), sizeof(a))
#define SZ(i) int(i.size())
#define FOR(i, j, k, in) for (int i=j ; i<(k) ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=(k) ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define REP1(i,j) FOR(i, 1, j+1, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define ALL(_a) _a.begin(),_a.end()
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define X first
#define Y second
#ifdef jayinnn
#define TIME(i) Timer i(#i)
#define debug(...) do{\
    fprintf(stderr,"%s - %d (%s) = ",__PRETTY_FUNCTION__,__LINE__,#__VA_ARGS__);\
    _do(__VA_ARGS__);\
}while(0)
template<typename T>void _do(T &&_x){cerr<<_x<<endl;}
template<typename T,typename ...S> void _do(T &&_x,S &&..._t){cerr<<_x<<", ";_do(_t...);}
template<typename _a,typename _b> ostream& operator << (ostream &_s,const pair<_a,_b> &_p){return _s<<"("<<_p.X<<","<<_p.Y<<")";}
template<typename It> ostream& _OUTC(ostream &_s,It _ita,It _itb)
{
    _s<<"{";
    for(It _it=_ita;_it!=_itb;_it++)
    {
        _s<<(_it==_ita?"":",")<<*_it;
    }
    _s<<"}";
    return _s;
}
template<typename _a> ostream &operator << (ostream &_s,vector<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,set<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,deque<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a,typename _b> ostream &operator << (ostream &_s,map<_a,_b> &_c){return _OUTC(_s,ALL(_c));}
template<typename _t> void pary(_t _a,_t _b){_OUTC(cerr,_a,_b);cerr<<endl;}
#define IOS()
class Timer {
private:
    string scope_name;
    chrono::high_resolution_clock::time_point start_time;
public:
    Timer (string name) : scope_name(name) {
        start_time = chrono::high_resolution_clock::now();
    }
    ~Timer () {
        auto stop_time = chrono::high_resolution_clock::now();
        auto length = chrono::duration_cast<chrono::microseconds>(stop_time - start_time).count();
        double mlength = double(length) * 0.001;
        debug(scope_name, mlength);
    }
};
#else
#define TIME(i)
#define debug(...)
#define pary(...)
#define endl '\n'
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)
#endif
 
const ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int iNF = 0x3f3f3f3f;
const ll MAXN = 100005;
const int N = 50;
const double TL = 1.95;

 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

pii d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char con[4] = {'D', 'U', 'R', 'L'};
#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<double,double> pdd;
#define SQ(i) ((i)*(i))
#define MEM(a, b) memset(a, (b), sizeof(a))
#define SZ(i) int(i.size())
#define FOR(i, j, k, in) for (int i=j ; i<(k) ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=(k) ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define REP1(i,j) FOR(i, 1, j+1, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define ALL(_a) _a.begin(),_a.end()
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define X first
#define Y second
#ifdef jayinnn
#define TIME(i) Timer i(#i)
#define debug(...) do{\
    fprintf(stderr,"%s - %d (%s) = ",__PRETTY_FUNCTION__,__LINE__,#__VA_ARGS__);\
    _do(__VA_ARGS__);\
}while(0)
template<typename T>void _do(T &&_x){cerr<<_x<<endl;}
template<typename T,typename ...S> void _do(T &&_x,S &&..._t){cerr<<_x<<", ";_do(_t...);}
template<typename _a,typename _b> ostream& operator << (ostream &_s,const pair<_a,_b> &_p){return _s<<"("<<_p.X<<","<<_p.Y<<")";}
template<typename It> ostream& _OUTC(ostream &_s,It _ita,It _itb)
{
    _s<<"{";
    for(It _it=_ita;_it!=_itb;_it++)
    {
        _s<<(_it==_ita?"":",")<<*_it;
    }
    _s<<"}";
    return _s;
}
template<typename _a> ostream &operator << (ostream &_s,vector<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,set<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,deque<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a,typename _b> ostream &operator << (ostream &_s,map<_a,_b> &_c){return _OUTC(_s,ALL(_c));}
template<typename _t> void pary(_t _a,_t _b){_OUTC(cerr,_a,_b);cerr<<endl;}
#define IOS()
class Timer {
private:
    string scope_name;
    chrono::high_resolution_clock::time_point start_time;
public:
    Timer (string name) : scope_name(name) {
        start_time = chrono::high_resolution_clock::now();
    }
    ~Timer () {
        auto stop_time = chrono::high_resolution_clock::now();
        auto length = chrono::duration_cast<chrono::microseconds>(stop_time - start_time).count();
        double mlength = double(length) * 0.001;
        debug(scope_name, mlength);
    }
};
#else
#define TIME(i)
#define debug(...)
#define pary(...)
#define endl '\n'
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)
#endif
 
const ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int iNF = 0x3f3f3f3f;
const ll MAXN = 100005;
const int N = 50;
const double TL = 1.95;

 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

pii d[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char con[4] = {'D', 'U', 'R', 'L'};

int order[4] = {0, 1, 2, 3};

double start_time = -1;
bool first_time = true;

double limit = 0;

string ans;
int max_score = 0;
int cnt = 0;
vector<vector<int>> ti, sc;
int n_tile = 0;

double get_time() {
    timeval tv;
    gettimeofday(&tv, 0);
    auto ret = tv.tv_sec + tv.tv_usec * 1e-6;

    if(first_time) {
        start_time = ret;
        first_time = false;
    }

    return ret - start_time;
}


inline bool check(pii nxt, vector<bool> vis){
    if(nxt.X >= N || nxt.Y >= N || nxt.X < 0 || nxt.Y < 0) return false;
    if(vis[ti[nxt.X][nxt.Y]] == true) return false;
 
    return true;
}
 
inline pii add(pii a, pii b){
    return make_pair(a.X + b.X, a.Y + b.Y);
}
 
void walk(pii s, vector<bool> vis, int score, string path){

    if(get_time() >= TL) return;
    vis[ti[s.X][s.Y]] = true;
    score += sc[s.X][s.Y];
    bool flag = true;
 
    // int k = rand() % 4;
    // int k= 2 * (rand() % 2) + 1;
    // int k = 3;
    int i;
    // vector<int> shu = {0, 1, 2, 3};
    // random_shuffle(ALL(shu));
    for(int j=0;j<4;j++){
        // int i = shu[j];
        i = order[j];
        pii nxt = add(s, d[i]);
        if(check(nxt, vis)){
            flag = false;
            walk(nxt, vis, score, path+con[i]);           
        }
    }
 
    if(flag){
        cnt ++;
        if(score > max_score){
            max_score = score;
            ans = path;
        }
    }
 
    return;
    
}
 
/********** Good Luck :) **********/
int main (int argc, char *argv[]) {
    TIME(main);
    IOS();
    // for(int i=0;i<4;i++){
    //     order[0] = argv[i+1][0] - '0';
    // }
    pii s;
    cin >> s.X >> s.Y;
    ti.resize(50, vector<int>(50));
    sc.resize(50, vector<int>(50));
    REP(i, 50) REP(j, 50) cin >> ti[i][j], n_tile = max(n_tile, ti[i][j]);
    REP(i, 50) REP(j, 50) cin >> sc[i][j];
 
    vector<bool> vis(n_tile+5, false);
    
    walk(s, vis, 0, "");
 
    // cout << ans << endl;
    cout << max_score;
    // debug(get_time());
    return 0;
}
int order[4] = {0, 1, 2, 3};

double start_time = -1;
bool first_time = true;

double limit = 0;

string ans;
int max_score = 0;
int cnt = 0;
vector<vector<int>> ti, sc;
int n_tile = 0;

double get_time() {
    timeval tv;
    gettimeofday(&tv, 0);
    auto ret = tv.tv_sec + tv.tv_usec * 1e-6;

    if(first_time) {
        start_time = ret;
        first_time = false;
    }

    return ret - start_time;
}


inline bool check(pii nxt, vector<bool> vis){
    if(nxt.X >= N || nxt.Y >= N || nxt.X < 0 || nxt.Y < 0) return false;
    if(vis[ti[nxt.X][nxt.Y]] == true) return false;
 
    return true;
}
 
inline pii add(pii a, pii b){
    return make_pair(a.X + b.X, a.Y + b.Y);
}
 
void walk(pii s, vector<bool> vis, int score, string path){

    if(get_time() >= TL) return;
    vis[ti[s.X][s.Y]] = true;
    score += sc[s.X][s.Y];
    bool flag = true;
 
    // int k = rand() % 4;
    // int k= 2 * (rand() % 2) + 1;
    // int k = 3;
    int i;
    // vector<int> shu = {0, 1, 2, 3};
    // random_shuffle(ALL(shu));
    for(int j=0;j<4;j++){
        // int i = shu[j];
        i = order[j];
        pii nxt = add(s, d[i]);
        if(check(nxt, vis)){
            flag = false;
            walk(nxt, vis, score, path+con[i]);           
        }
    }
 
    if(flag){
        cnt ++;
        if(score > max_score){
            max_score = score;
            ans = path;
        }
    }
 
    return;
    
}
 
/********** Good Luck :) **********/
int main (int argc, char *argv[]) {
    TIME(main);
    IOS();
    // for(int i=0;i<4;i++){
    //     order[0] = argv[i+1][0] - '0';
    // }
    pii s;
    cin >> s.X >> s.Y;
    ti.resize(50, vector<int>(50));
    sc.resize(50, vector<int>(50));
    REP(i, 50) REP(j, 50) cin >> ti[i][j], n_tile = max(n_tile, ti[i][j]);
    REP(i, 50) REP(j, 50) cin >> sc[i][j];
 
    vector<bool> vis(n_tile+5, false);
    
    walk(s, vis, 0, "");
 
    // cout << ans << endl;
    cout << max_score;
    // debug(get_time());
    return 0;
}