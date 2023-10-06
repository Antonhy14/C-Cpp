#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define nl cout<<"\n"
#define sp(x,n) fixed<<setprecision(x) << n
#define all(x) x.begin(),x.end()
#define fore(i,l,r) for(int i=l;i<r;i++)
#define pb push_back
#define pf push_front
/*
    Valores ASCII
    'A' = 65 'Z' = 90
    'a' = 97 'z' = 122
    '0' = 48 '9' = 57
*/
int mcd(int a, int b) {
    if(b==0) return a;  // Si mcd(a,0) finaliza y devuelve el mcd, si no hay pues 1
    return mcd(b,a%b); // Si b!=0 entonces llama la funcion otra vez con a=b y b=a%b
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin >> a >> b;
    int x = mcd(a,b);
    cout << x; // el mcd
    
    return 0;
}
