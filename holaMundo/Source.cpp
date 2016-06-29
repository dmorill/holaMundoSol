#include <iostream>;
#include <fstream>;
#include <string>;
#include <experimental/filesystem>;
using namespace std;

void path(string &s);

int main() {
	string donde;
	path(donde);
	donde = donde + "texto.txt";
	fstream file;

	file.open(donde, fstream::ate | fstream::in | fstream::out);	//ate es para empezar el cursor al fnial, es diferente de ::app
	if (file.is_open()== false) {
		cout << "Horror..."; 
		return 0;
	}
	long pos = file.tellp();
	experimental::filesystem::resize_file(donde, pos-4);
	file.close();

	//cin.get();
	return 0;
}

void path(string &s) {
	char* pchar;
	_get_pgmptr(&pchar);
	string aux(pchar); int y = 0, i = 0;
	for (i = aux.size(); i >= 0; i--) {
		if (aux[i - 1] == char(92)) {
			y++;
			if (y == 1) break;
		}
	}
	aux = aux.substr(0, i);
	s = aux;
}