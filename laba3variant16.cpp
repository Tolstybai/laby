#include <iostream>
#include<cmath>
#include<ctime>
using namespace std;
const int N = 10;
int *Read(int N) {
	srand(time(NULL));
	int *res = new int[N];
	for (int i = 0; i < N; i++)res[i] = rand() % 10 - 5;
	return res;
}
int main() {
	int k = 0;
	int *Arr = Read(N);
	cout << "Array=";
	for (int i = 0; i < N; i++) {
		cout << Arr[i]<<" ";
	}
	for (int i=0;i<N;i++){
		if (Arr[i] < 0)k++;
	}
	cout << endl<<"amount of negative number=" << k<<endl;
	int min = abs(Arr[0]),b,s=0;
	for (int i = 0; i < N; i++) {
		if (abs(Arr[i]) < min) {
			min = abs(Arr[i]);
			b = i;
		}
		}
	for (int i = b; i < N; i++)s += abs(Arr[i]);
	cout << "sum=" << s<<endl;
	for (int i = 0; i < N; i++) {
		if (Arr[i] < 0)Arr[i] = Arr[i] * Arr[i];
	}
	cout << "not oredered - ";
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << " ";
	}
	int c;

	for (int j = 0; j < N-1; j++) {
		for (int i =0; i < N-j-1; i++)
		if (Arr[i] > Arr[i + 1]) {
			c = Arr[i];
			Arr[i] = Arr[i + 1];
			Arr[i + 1] = c;
		}
	}
	cout << endl<<"already oredered - ";
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << " ";
	}
	delete[]A;
	cin.get();
	cin.get();
}
