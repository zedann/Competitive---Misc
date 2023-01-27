#include <bits/stdc++.h>
#include <iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
#define pi 3.141592653589793238
char alpha [] ={'a' ,'b' ,'c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k','l', 'm' ,'n' ,'o' ,'p' ,'q' ,'r', 's' ,'t' ,'u', 'v','w' ,'x', 'y' ,'z'};
using namespace std;
// bool isPalindrome(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i] != s[s.size() - i - 1])
//         {
//             return false;
//         }
//     }
//     return true;
    
// }
// bool isPrime(ll n)
// {
//     if (n <= 1)
//         return false;
//      for (int i = 2; i*i <= n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// ll gcd(ll a,ll b){
//     while (b!=0)
//     {
//         ll temp = a;
//         a = b;
//         b =temp%a;
//     }
//     return a;
// }
// ll lcm(int a,int b){
//     return a/__gcd(a,b) * b;
// }
// ll calc(ll a1,ll an , ll n){
//   return ((a1+an)*n)/2;
// }
 
// ll distance(ll x1 , ll y1 , ll x2,ll y2){
//   return sqrt(((pow((x1-x2),2)) + (pow((y1-y2),2))));
// }
 
// ll pythagoras (ll a , ll b){
//     return sqrt(pow(a,2) + pow(b,2));
// }
// //                 fib 0 1 2 3 4 5 6 7 => fib(0) =0 , fib(1) = 0 ,fib(2) = 1,fib(3) = 1 , fib(4) = 2 (true prime)
//     bool prime[51] = { 0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0 };
// ll fib(ll n){
//     if(n<=1)
//     return 0;
//     else if (n==2)
//     return 1;
    
//     return fib(n-1) + fib(n-2);
// }
// auto pr = std::max_element(m.begin(), m.end(), [](const auto &x, const auto &y) {
//                     return x.second < y.second;
//                 });
// arr[1] = 1; 
// for (ll i = 2; i <= 1000; i++)
//  {
//     for (ll j = 2 * i; j <=1000000; j+=i)
//       {
//         arr[j] = 1;//not prime
//  }        
//}
/*
Time taken for two squares to overlap
dd t = sqrt(2) *((l-sqrt(qi))/abs(s2-s1));
*/
// bool hasZero(int n)
// {
//     if(n==0)
//     return true;
//     while (n!=0)
//     {
//         if(n%10 == 0)
//         {
//             return true;
//         }
//         n/=10;
//     }
//     return false;
    
// }
// bool right_angle(int x1 ,int y1 , int x2 ,int y2, int x3 ,int y3){
//     if((x1==x2)&&(y1==y2) ||(x1==x3)&&(y1==y3) ||(x3==x2)&&(y3==y2))
//     return false;
//     int a = ((x1-x2)*(x1-x2)) +((y1-y2)*(y1-y2));
//     int b = ((x1-x3)*(x1-x3)) +((y1-y3)*(y1-y3));
//     int c = ((x2-x3)*(x2-x3)) + ((y2-y3)*(y2-y3));    
//     vector<int>v {a,b,c};
//     sort(v.begin(),v.end());
//     int x = v[2];
//     int y = v[0]+v[1];
//     return x == y;
// }
  //string bii = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int sum_range(int s , int e,vector<int>&cs){
    if(s==0)
        return cs[e];
    return cs[e] - cs[s-1];
}
void solve(){
    vector<int>A = {2,1,4,5,3,7};
    vector<int>S(A.size(),0);
    for (int i = 0; i < (int)A.size(); i++)
    {
        S[i] += (i==0) ? A[i] : A[i] + S[i-1];
    }
    cout << sum_range(0,5,S) << "\n";
}
void init() {
    IOS;
}
int main()
{
init();
int t = 1;
// cin>>t;
while (t--){
    solve();
    cout << "\n";
}
}