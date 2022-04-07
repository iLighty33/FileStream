// Персональный шаблон проекта C++
#include <iostream>
#include <fstream> // Библиотека, реализующая работу с файловой системой
#include <string>

using namespace std;

int statistic(string & str) {
	ofstream out;
	out.open("statistics.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.length() << "\n";
		out.close();
		return 0;
	}
	out.close();
	return -1;

}

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1
	cout << "Задача 1.\nВведите слово: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;

	cout << "Введите слово: ";
	cin >> word;
	cout << statistic(word) << endl;

	/*
	string path = "file.txt"; // строковая переменная, содержащая путь к файлу.
	ofstream out; // объект класса ofstream, отвечающий за запись данных в файл. Названию любое. Самое распространённое - out или fout.
	out.open(path, ios::app); // принимает набор значений. Инициализация полей объекта out, или же открытие файла path в режиме ios::app

	if (out.is_open()) { // возвращает true - если файл уладось открыть. если нет - false. Проверка на то, открылся ли наш файл.
		cout << "Файл открыт для записи\n";
		//out << "Hello world!\n";
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "Введите строку:\n";
			getline(cin, str);
			out << str << "\n"; // добавления записи в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	out.close(); // закрытие файла.

	ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		//string str; // строка, в которую будет записываться текст файла.
		//char sym;

		string str;
		

		while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
		}

		/ *cin >> str;
		getline(cin, str);* /

		/ *
		/ *while (in.get(sym)) // метод get считывает файл и переходит на след.символ
			str += sym;
		cout << str << endl;* /
		while (!in.eof()) { // пока мы не в конце файла.
			str = ""; // - если строка не нужна после цикла
			//string str; // если строка нужна после цикла
			in >> str;
			//str += sym;
			cout << str << endl;
		}
		* /
	}
	else
		cout << "Ошибка открытия файла\n"; // название неверное, путь неверный, недостаточно доступа.
	in.close();

	if (remove("file.txt") == 0)
		cout << "Файл удалён\n";
	else
		cout << "Ошибка удаления файла\n";
	*/

	return 0;
}