// ������������ ������ ������� C++
#include <iostream>
#include <fstream> // ����������, ����������� ������ � �������� ��������
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

	// ������ 1
	cout << "������ 1.\n������� �����: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;

	cout << "������� �����: ";
	cin >> word;
	cout << statistic(word) << endl;

	/*
	string path = "file.txt"; // ��������� ����������, ���������� ���� � �����.
	ofstream out; // ������ ������ ofstream, ���������� �� ������ ������ � ����. �������� �����. ����� ��������������� - out ��� fout.
	out.open(path, ios::app); // ��������� ����� ��������. ������������� ����� ������� out, ��� �� �������� ����� path � ������ ios::app

	if (out.is_open()) { // ���������� true - ���� ���� ������� �������. ���� ��� - false. �������� �� ��, �������� �� ��� ����.
		cout << "���� ������ ��� ������\n";
		//out << "Hello world!\n";
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "������� ������:\n";
			getline(cin, str);
			out << str << "\n"; // ���������� ������ � ����
		}
	}
	else
		cout << "������ �������� �����\n";
	out.close(); // �������� �����.

	ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "���� ������ ��� ������\n";
		//string str; // ������, � ������� ����� ������������ ����� �����.
		//char sym;

		string str;
		

		while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
		}

		/ *cin >> str;
		getline(cin, str);* /

		/ *
		/ *while (in.get(sym)) // ����� get ��������� ���� � ��������� �� ����.������
			str += sym;
		cout << str << endl;* /
		while (!in.eof()) { // ���� �� �� � ����� �����.
			str = ""; // - ���� ������ �� ����� ����� �����
			//string str; // ���� ������ ����� ����� �����
			in >> str;
			//str += sym;
			cout << str << endl;
		}
		* /
	}
	else
		cout << "������ �������� �����\n"; // �������� ��������, ���� ��������, ������������ �������.
	in.close();

	if (remove("file.txt") == 0)
		cout << "���� �����\n";
	else
		cout << "������ �������� �����\n";
	*/

	return 0;
}