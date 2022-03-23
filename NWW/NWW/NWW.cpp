
#include <iostream>
using namespace std;

int main()
{
	int a,b,nww,iloczyn;

	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;

	iloczyn = a * b;
	while (a != b)
	{
		if (a < b)
		{
			b = b - a;
		}
		else
		{
			a = a - b;
		}
	}

	nww = iloczyn / a;
	cout << "Najmniejsza wspolna wielokrotnosc: " << nww;
}