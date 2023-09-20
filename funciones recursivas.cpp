#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define nl cout<< "\n"
#define sp(x,n) fixed << setprecision(x) << n
#define all(x) x.begin(),x.end()
using namespace std;
string isPali(string str);
float potent(float x,int n);
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}
// Comprobador de palindromos, YEAH, si es. NOAH si no es.
string isPali(string str) {
	if(str.length()<=1) return "YEAH";
	if(tolower(str[0]) == tolower(str[str.length()-1])) {
		str.erase(str.begin());
		str.erase(str.length()-1);
		return isPali(str);
	}
	return "NOAH";
}
// Calcular potencia positivias de un numero real.
float potent(float x,int n) {
	if(n==0) return 1;
	return x*potent(x,n-1);
}
