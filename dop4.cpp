#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ru");
	int r, q, p;
	cout << "������ = "; cin >> r;
	cout << "1 ��������� "; cin >> p;
	cout << "2 ��������� "; cin >> q;
	if (r <= q * p / (2 * sqrt(q * q + p * p))) {
		cout << "�������";
	}
	else {
		cout << "�� �������";
	}
	
}