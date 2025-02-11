#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string reverseString(string inputString) { // добавляет reverseString, которая принимает inputString как аргумент и возвращает перевернутую строку
	vector<char> charVector(inputString.begin(), inputString.end()); // добавляет charVector и инициализирует его копированием всех символов из строки inputString
	reverse(charVector.begin(), charVector.end()); // Переворачивает charVector с помощью reverse
	return string(charVector.begin(), charVector.end()); // новая строка из перевернутого charVector и возвращает её
}

int main() {
	string text;

	cout << "Введите текст: ";
	getline(cin, text);

	string reversedText = reverseString(text);

	cout << "Текст задом наперед: " << reversedText << endl;

	return 0;
}