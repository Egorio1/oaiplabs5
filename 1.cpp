#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double b, z, x = 4.e-3, s = 1.1, j;
	cout << "������� x " << endl;
	cin >> x;
	cout << "������� j " << endl; 
	cin >> j;
	cout << "������� s " << endl; 
	cin >> s;
	b = s + (5 * x + j);
	if (b < 1.5)
		z = sqrt(x + 0.3 * j) + b;
	else
		z = abs(x * j + b);
	cout << "j=" << j << "  z=" << z << endl;
}
