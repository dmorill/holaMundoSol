#include <iostream>;
#include <vector>;
#include <string>;
#include <fstream>

using namespace std;

string path(int x);

int main(int argc, char** argv) {
	string direDonde = path(1);		//obtener el path

	cout << "Have " << argc << " argumetns:" << endl;
	for (int i = 0; i < argc; ++i) {
		cout << argv[i] << endl;
	}

	cin.get();
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