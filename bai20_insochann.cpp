#include <iostream>
using namespace std;
int main()
{
	int so, tongchan = 0, tongle = 0, tong = 0;
	cout << "nhap so:"; cin >> so;
	for (int i = 1; i < so; i++)
	{
		tong += i;
		if (i%2==0)
		{
			cout << i << " " << endl;
			tongchan += i;
		}
		else {
			tongle += i;

		}
	}
	cout << "tong cac so chan:" << tongchan << endl;
	cout << "tong cac so le:" << tongle << endl;
	cout << "tong cac so:" << tongchan + tongle << endl;
	return 0;
}