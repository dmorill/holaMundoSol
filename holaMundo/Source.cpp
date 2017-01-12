#include <iostream>;
#include <vector>;
#include <string>;
#include <fstream>
#include <ctime>
using namespace std;

string path(int x);

int main(int argc, char** argv) {
	// string direDonde = path(1);		//obtener el path
	clock_t t1 = clock(), t2 = 0;
	double total = 0;
	for (int i = 0; i < 2000000000; i++) {
		total += i;
	}
	t2 = clock() - t1;
	cout << t2 / double(CLOCKS_PER_SEC);
	//cin.get();
	return 0;
}


string path(int x){
	char* p;
	_get_pgmptr(&p);
	string direDonde(p);
	int i = 0, iDonde = 0;
	for (i = direDonde.size(); i >= 0; i--) {
		if (direDonde[i - 1] == char(92)) {
			iDonde++;
			if (iDonde == x) break;
		}
	}
	direDonde = direDonde.substr(0, i);
	return direDonde;
}