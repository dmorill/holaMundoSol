#include <iostream>;
#include <vector>;
using namespace std;

void mostrarVector(vector<int> &v);

int main() {
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << "Hola mundo.";

	mostrarVector(v);

	cin.get();
	return 0;
}

void mostrarVector(vector<int> &v) {
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		cout << *it << endl;
	}
}