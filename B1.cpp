#include <iostream>
using namespace std;
int a = 43758347;
int main()
{
	// BAI 1
	int a, b;
	cout << "Nhap vao 2 so tu nhien (so a nho hon so b): \n";
	cin >> a >> b;
	if (a < 0 || b < 0)
	{
		return 0;
	}
	else
	{
		int tong = a;
		for (int i = a+1; i <= b; i++)
		{
			tong = tong + i;
		}
		cout << "Ket qua la: " << tong << endl;
	}
	return 0;
}