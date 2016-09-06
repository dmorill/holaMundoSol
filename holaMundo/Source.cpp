#include <iostream>;
#include <vector>;
#include <random>
using namespace std;

void mostrarVector(vector<int> &v);

int main() {
	vector<int> v;
	vector<int> v2;
	vector<int> v3;
	cout << "Hola mundo." << endl << endl;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		v2.push_back(i + 10);
	}
	
	cout << "Hola Hermosa!" << endl << endl;

	mostrarVector(v);
	mostrarVector(v2);
	vector<int>::iterator it = v3.begin();
	v3.insert(it, v.begin(), v.end() - (v.size()/2));
	it = v3.end();
	v3.insert(it, v2.begin() + (v.size()/2), v2.end());
	mostrarVector(v3);
	//mostrarVector(v);

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