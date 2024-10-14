#include<iostream>
using namespace std;

void transformator(int num, string n) {
	if (num > 0 && num < 4) {
		for (int i = 0; i < num; i++) {
			cout << n[0];
		}
	}
	else if (num == 4) {
		cout << n[0] << n[1];
	}
	else if (num == 5) {
		cout << n[1];
	}
	else if (num < 9 && num > 5) {
		cout << n[1];
		for (int i = 0; i < num - 5; i++) {
			cout << n[0];
		}
	}
	else if(num == 9){
		cout << n[0] << n[2];
	}
}

void main() {

	cout << "" << endl;
	cout << "-------------------------------------------------------" << endl << endl;

	int in;
	
	string n1 = "IVX";
	string n10 = "XLC";
	string n100 = "CDM";

	while (true) {
		cout << "Input: ";
		cin >> in;

		if (in < 1 && in > 3999) {
			cout << "Error." << endl;
		}
		else {
			break;
		}
	}

	cout << "Ouptput: ";

	for (int i = 0; i < in / 1000; i++) {
		cout << "M";
	}

	in %= 1000;

	transformator(in / 100, n100);

	in %= 100;

	transformator(in / 10, n10);

	in %= 10;

	transformator(in, n1);

	
	cout << endl;

	//main();

	/*� ����� ������� ����������� ������ � ��� ��������� ���������� ������. ��� � ������ ��������� ���� ����������� �������� ��� ������ 
	����� � ��� ���� ��� �� ���������. ��������� � ���������, ��� ��� ������� ������� ��������� ������� ������� (��-����� ��� ����� �������
	����������) � �������, ��� ������ ������ ������� �� 1, 5 � 10-1. �� � ������ �����... ��� ������� ��������� � ���� ������ 2 ���.*/

}