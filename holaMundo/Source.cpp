#include <iostream>;
#include <vector>;
#include <time.h>;		//  <------- libreria

using namespace std;

void mostrarVector(vector<int> &v);

int main() {
	clock_t tInicial = clock();   //  <---- donde empieza a contar

	vector<int> v;

	for (int i = 0; i < 5000000; i++) {
		v.push_back(i);
	}

	clock_t tFinal = clock() - tInicial; //  <---- clock() es el tiempo ahora!!!! por eso resto
	double tiempo = tFinal / double(CLOCKS_PER_SEC);  // <--- transformar segundos se divide por la
					// cosntante CLOCKS_PER_SEC, depende del sistema suele ser 1000.								
	
	cout << "El algoritmo uso: " << tiempo << " segundos." << endl; //   <---- mostrar el tiempo

	cin.get();
	return 0;
}

void mostrarVector(vector<int> &v) {
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		cout << "[" <<*it <<"]" << endl;
	}
	cout << endl;
}