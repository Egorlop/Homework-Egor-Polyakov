#include <iostream> 
using namespace std;
int main()
{
	int k = 0;
	int i = 0;
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
			break;
	}
	for (int i = 1; i < 101; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && arr[i + 1] != 0) {
			k++;
		}
		if (arr[i] == 0) {
			break;
		}
	}
	cout << k << endl;

	system("pause");
	return 0;

}