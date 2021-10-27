#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
	string str;
	cin >> str;
	bool upper = false;
	bool lower = false;
	for (char c : str) {
		if (isupper(c))
			upper = true;
		if (islower(c))
			lower = true;
	}

	if (upper && lower)
		cout << "Mix";
	else if (upper)
		cout << "All Capital Letter";
	else
		cout << "All Small Letter";
}
