#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "RU");
	int k;
	cout << "������� ������� �� 1 �� 9 "; cin >> k;
	if (k == 1)
	{ cout << "��� " << k << " ���"; }
	
	if ( k>=2 && k<=4) {
		cout << "��� " << k << " ����"; 
	} 
	if (k>= 5 && k<=9) {
		cout << "��� " << k << " ���"; 
	}
}