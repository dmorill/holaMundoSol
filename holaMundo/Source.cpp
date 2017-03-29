#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <algorithm>
using namespace std;

void mostar(vector<int>& v) {
	vector<int>::iterator it = v.begin();
	for (; it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//string path(int x);
//void combinaRecu(vector<int>& v, int lim = 3);

void permutate(vector<int>& s, vector<int>& index, int depth, int& count, vector<vector<int>>& vCombi) {
	if (depth == s.size()) {
		++count;
		vCombi.push_back(vector<int>());
		for (int i = 0; i < s.size(); ++i) {
			vCombi.back().push_back(s[index[i]]);
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < s.size(); ++i) {
		index[depth] = i;
		permutate(s, index, depth + 1, count, vCombi);
	}
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	mostar(v);

	vector<int> index(v.size());
	int count = 0;
	vector<vector<int>> vCombi;
	permutate(v, index, 0, count, vCombi);
	cout << "\nTotal permutations with repetitions: " << count;
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