#include "map_.h"
#include <string>

using namespace std;

bool check(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

void main() {
	map_<int, string> m;
	m.insert(10, "Ten");
	m.insert(0, "Zero");
	m.insert(5, "Five");
	m.insert(1, "One");
	m.insert(777, "777");
	m.insert(-777, "-777");
	m.print();
	

	system("pause");

}

