#include <iostream>;
#include <vector>;
<<<<<<< HEAD
#include <random>
=======
>>>>>>> parent of 9f3de75... Eliminar caracteres de txt
using namespace std;

void mostrarVector(vector<int> &v);

int main() {
	vector<int> v;
<<<<<<< HEAD
	vector<int> v2;
	vector<int> v3;
	cout << "Hola mundo." << endl << endl;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		v2.push_back(i + 10);
	}
	
	mostrarVector(v);
	mostrarVector(v2);
	vector<int>::iterator it = v3.begin();
	v3.insert(it, v.begin(), v.end() - (v.size()/2));
	it = v3.end();
	v3.insert(it, v2.begin() + (v.size()/2), v2.end());
	mostrarVector(v3);
	//mostrarVector(v);

=======

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << "Hola mundo.";

	mostrarVector(v);

>>>>>>> parent of 9f3de75... Eliminar caracteres de txt
	cin.get();
	return 0;
}

void mostrarVector(vector<int> &v) {
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		cout << "[" <<*it <<"]" << endl;
	}
<<<<<<< HEAD
	cout << endl;
=======
>>>>>>> parent of 9f3de75... Eliminar caracteres de txt
}