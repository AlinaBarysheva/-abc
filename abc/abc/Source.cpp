#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	string str;

	cout << "Введите строку: ";
	cin >> str;

	bool flag = false;		             // Флаг, показывающий, нашли ли мы abc или нет.
	for (int i = 0; i < str.length() - 2; ++i) {
		string sub = str.substr(i, 3);	     // Подстрока длины 3.
		if (sub == "abc") {
			flag = true;
			break;
		}
	}

	if (flag) {
		cout << "abc найдена";
	} else {
		cout << "abc не найдена";
	}

	cout << endl;

	system("pause");
	return 0;
}
