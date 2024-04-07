#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define in(a)                          \
    for (int i = 0; i < a.size(); ++i) \
        cin >> a[i];
#define out(a)                          \
    for (int i = 0; i < a.size(); ++i) \
        cout << a[i]<<' '; cout<<endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
  
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> vp);
template <class T> void _print(set <T> vp);
template <class T, class V> void _print(map <T, V> vp);
template <class T> void _print(multiset <T> vp);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> vp) {cerr << "[ "; for (T i : vp) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> vp) {cerr << "[ "; for (T i : vp) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> vp) {cerr << "[ "; for (T i : vp) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> vp) {cerr << "[ "; for (auto i : vp) {_print(i); cerr << " ";} cerr << "]";};

void solve()
{
    
    vector<ll>institute_code(23);
    ll n = 23;
    for(int i=0; i<n; i++){
        cin>>institute_code[i];
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  //  debug(institute_code)


    vector<string>names(n);

    for(int i=0; i<n; i++){
        getline(cin, names[i]);
    }
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //debug(names)

    vector<ll>year(n);

    for(int i=0; i<n; i++){
        cin>>year[i];
    }  
    debug(year)
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');


    vector<ll>nirf(n) ;

    for(int i=0; i<n; i++){
        cin>>nirf[i];
    } 
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
    debug(nirf)

    vector<string>state(n);

    for(int i=0; i<n; i++){
        getline(cin, state[i]);
    }
    debug(state)
    debug(sz(state))
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');


    vector<string>address(n);

    for(int i=0; i<n; i++){
        getline(cin, address[i]);
    }
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');


    vector<double>ctc(n);

    for(int i=0; i<n; i++){
        cin>>ctc[i];
    }
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');


    cout<<"INSERT ALL" <<endl;
    for(int i=0; i<n; i++){
        cout<<"   INTO INST (Institute_code,Institute_name,Establishment_year,NIRF,Image_src,State,Institute_address,Ctc)"<<"Values ("<<institute_code[i]<<", '"<<names[i]<<"', "<<year[i] <<", "<<nirf[i]<<", "<<"'NULL'" <<", '"<<state[i]<<"', '" <<address[i] <<"', "<<ctc[i] <<")" <<endl;
    }

    cout<<"SELECT * FROM dual;" <<endl;
}
signed main() {
ios_base::sync_with_stdio(false),
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

ll t;
cin>>t;
// t=1;
while(t--){
  solve();
}
return 0;
}