#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define nl cout<< "\n"
#define sp(x,n) fixed << setprecision(x) << n
#define all(x) x.begin(),x.end()
using namespace std;
int binarySearch(int x,vector<int> arr,int size);
// Funcion para hacer una busqueda binaria, si lo encuentra devuelve el indice, sino -1.
/* 
	La busqueda binaria se hace dividiendo a la mitad el arreglo, asi se reduce el rango de posibilidades hasta
	llegar a un resultado, ya sea haber encontrado el elemento, o no.
	Esta es una manera mas eficiente de realizar busquedas, a comparacion con una busqueda lineal(que compara cada elemento).
	Ya que en el peor de los casos hara la potencia de dos mas cercana a lc cantidad de elementos, por ejemplo:
		size = 32
		2^5 = 32
		Aqui el peor de los casos es que haga 5 comparaciones, en cambio con una lineal podria ser que comparara las 32.
		 
*/
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	vector<int> v = {1,6,8,9,2,3,0,5}; 
	sort(all(v)); // 0 1 2 3 5 6 8 9
		      // 0 1 2 3 4 5 6 7 
	int n; 
	cin >> n;
	int x = binarySearch(n,v);
	cout << x;
	return 0;
}
int binarySearch(int x,vector<int> v) {
	int i=0,d=v.size()-1;
	while(i<=d) {
		int m=(l+r)/2;
		if(arr[m]==x) return m; // si la busqueda binaria se hace en el main hay que terminar el bucle con un break, poniendo cualquier condicion en el while.
		else if(arr[m]>x) d = m-1;
		else if(arr[m]<x) i = m+1;
	} 
	return -1;
}
