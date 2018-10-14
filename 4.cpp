#include <iostream> 
using namespace std;

int main()
{
	int a;
	cout << "Enter number: " << endl;
	cin >> a;
	if ((a / 1000 == a % 10) && ((a / 100) % 10 == (a % 100) / 10)) {
		cout << "1" << endl;
	}
	else {
		cout << rand() % 100 << endl;
	}
	system("pause");
	return 0;
}