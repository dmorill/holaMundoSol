#include <iostream>;
#include <vector>;
#include <string>;
#include <fstream>

using namespace std;

string path(int x);

int main() {
	string direDonde = path(1);		//obtener el path

	fstream archivo(direDonde + "hola.txt", fstream::in);
	if (archivo.is_open() == true) {
		vector<string> vS;
		string auxS;
		while (archivo >> auxS) {
			vS.push_back(auxS);
		}
		archivo.close();
	}else {
		cout << "horror!!!";
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