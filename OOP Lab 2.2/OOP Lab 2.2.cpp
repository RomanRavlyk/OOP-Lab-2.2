#include "Integer.h"
#include <iostream>

using namespace std;

int main()
{
	Integer a, b;
	cout << "a = ? "; cin >> a;
	
	cout << "b = ? "; cin >> b;
	cout << endl;
	cout << "a + b = " << a + b << endl;
	cout << "-a = " << -a << endl;
	cout << "-b = " << -b << endl;
	cout << "str a= " << string(a);
	cout << "str b= " << string(b) << endl;
	return 0;
}
