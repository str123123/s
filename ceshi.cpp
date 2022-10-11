#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	c = a % 100;
	b = a / 100;
	cout << b << "   " << c << endl;
	cout << setiosflags(ios::fixed) << setprecision(2) << sqrt((double)b) / sqrt((double)c) << endl;
	cout << b % c;
}
