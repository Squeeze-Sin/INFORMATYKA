#include <iostream>
using namespace std;
void szyfrowanie(int klucz, char tab[]);

int main()
{
	int klucz;
	char tab[200];

	cout << "Podaj wyraz składajacy sie z malych liter: ";
	cin >> tab;
	cout << "Popaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;

	szyfrowanie(klucz, tab);
	cout << "Po zaszyfrowaniu: " << tab << endl;
	szyfrowanie(-klucz, tab);
	cout << "Po rozszyfrowaniu: " << tab << endl;
}

void szyfrowanie(int klucz, char tab[])
{
	int dl = strlen(tab);

	if (!(klucz >= -26 && klucz <= 26))
	{
		return;
	}

	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
}