#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	string s;
	ifstream inputt("file.txt");
	if (!inputt) {
		cout << "Файл не найден!" << endl;
		return 0;
	}
	getline(inputt, s);
	while (inputt) {
		cout << s << "\n";
		getline(inputt, s);
	}
	cout << "\n";
	return 0;
}