#include <iostream>;
#include <vector>;

#include <iostream>;
#include <vector>;


using namespace std;

int main() {
	int i = 0;
	vector<int> v(10, 50);
	v.back() = 8;

	int *pi = &(v[0]);
	int *p = &v[9];
	cout << "Dirección del puntero:  " << p << endl;
	cout << "contenido del puntero:  " << *p << endl << endl;
	
	v.push_back(100);
	cout << "haciendo pusch_back" << endl << endl;
	cout << "Dirección del puntero:  " << p << endl;
	cout << "contenido del puntero:  " << *p << endl << endl;

	int aux = p - pi;
	p = &(v[0]) + aux;

	cout << "aux = " << aux << endl;
	cout << "Dirección del puntero:  " << p << endl;
	cout << "contenido del puntero:  " << *p << endl << endl;

	cin.get();
	return 0;
}