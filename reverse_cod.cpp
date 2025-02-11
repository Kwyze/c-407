#include <iostream> 
#include <string> 
#include <algorithm> // нужен для функции reverse

using namespace std;

string reverseString(string inputString) { // включает reverseString, в которую сохраняется строка inputString  и возвращает перевернутую строку
	reverse(inputString.begin(), inputString.end()); // переворачивает строку inputString с помощью reverse. reverse принимает две функции начало и конец который нужно перевернуть.
	return inputString; // Возвращает перевернутую строку.
}

int main() {
	setlocale(LC_ALL, "Russian");
	string text;

	cout << "Введите текст: ";
	getline(cin, text); // getline считывает все символы кроме enter

	string reversedText = reverseString(text); //  reverseString переворачивает строку text и сохраняет ее в новой строке reversedText

	cout << "Текст задом наперед: " << reversedText << endl;

	return 0;
}