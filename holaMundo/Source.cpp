#include <iostream>;
#include <vector>;
#include <random>
using namespace std;

void mostrarVector(vector<int> &v);
random_device rd;
mt19937 generator(rd());
uniform_real_distribution<double> distUni(0.0, 1.0);

int main() {
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << "Hola mundo." << endl;

	for (int i = 0; i < 20; i++) {
		cout << generator() << "           " << rd() << endl;
	}
	

	//mostrarVector(v);

	cin.get();
	return 0;
}

void mostrarVector(vector<int> &v) {
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		cout << "[" <<*it <<"]" << endl;
	}
}