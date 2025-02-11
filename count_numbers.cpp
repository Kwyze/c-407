include <iostream>
#include <string>

using namespace std;

int razmer() {
	string stroka;

	cout << "Введите строку: ";
	getline(cin, stroka); // считываем строку целиком, включая пробелы

	return stroka.length(); // возвращаем длину строки
}

int main() {
	setlocale(LC_ALL, "Russian");
	int size = razmer();
	cout << "Размер введенной с  троки: " << size << endl;

	return 0;
}
