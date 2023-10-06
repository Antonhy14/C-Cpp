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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin >> a >> b;
    
    while(b!=0) { // Si mcd(a,0) finaliza
        int aux = a; // si no entonces vamos a hacer la operacion otra vez con a=b y b=a%b
        a=b;
        b=aux%b;
    }
    cout << a;
    
    return 0;
}
