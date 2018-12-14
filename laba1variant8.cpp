#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double x, y, z1, z2;
	cin >> x >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + pow(sin(x)*cos(x),2)- 1;
	z2 = sin(y + x)*sin(y - x);
	cout << "z1=cos(x)^4+sin(y)^2+(sin(2x)^2)/4 -1=";
	cout << z1 << "\n";
	cout << "z2=sin(y+x)*sin(y-x)=";
	cout << z2<< "\n";
	if (z1 > z2)cout << "z1>z2";
	if (z2 > z1)cout << "z2>z1";
	if (z1==z2)cout << "z1=z2";
	system("pause");
	return 0;
}