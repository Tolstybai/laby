#include <iostream>
#include<cmath>
using namespace std;
double factorial(int n) {
	double res = 1;
		for (int i = 1; i <= n; i++) {
			res = res * i;
		}
	
	return res;
}
int main() {
	double  eps, f1 = 10000, f = 0, A, B;
	float dx;
	int i = 0, k=0;
	cout << "enter A and B  ";
	cin >> A >> B;

	cout << "enter dx"<<endl;
	cin >> dx;
	cout << "enter eps  ";
	cin >> eps;
	cout<<"+--------+---------------+-+"<<endl;
	cout << "|" << "X"<< "\t |" << "f(x)"<< "\t " << "\t |N" << "|" << endl;
	cout << "+--------+---------------+-+" << endl;
	while (A<=B+dx) {
		while (f1 >= eps) {
			f1 = pow(A, i) / factorial(i);
			i += 2;
			f = (f1*pow(-1, k)) + f;
			k++;
		}
		
		cout << "|" << A << "\t |" << f << "\t |" << k << "|" << endl;
		f1 = 1000;
		f = 0; i = 0; k = 0;
		A += dx;
		cout << "+--------+---------------+-+" << endl;
	}
	

	system("pause");
	return 0;
}