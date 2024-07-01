#include <iostream>
#include <cmath>
using namespace std;

bool checkSCP(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}

int main() {
	int so;
	cout << "Nhap vao mot so: ";
	cin >> so;
	cout << "So chinh phuong cua " << so << " la: ";

	for (int i = 1; i <= so; i++)
	{
		if (checkSCP(i)) cout << i << " ";
	}
}