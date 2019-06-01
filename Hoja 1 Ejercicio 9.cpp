#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void invertir() {
	srand(time(NULL));
	int *ejer9 = new int[10];
	int num, uni, dec, cent;
	int capi = 0;
	for (int i = 0; i < 10; i++)
	{
		ejer9[i] = rand() % (201 - 1);
		cout << "Número " << i + 1 << ": " << ejer9[i] << endl;
		num = ejer9[i];
		if (num<10)
		{
			capi++;
		}
		else if (num>=10&&num<=99)
		{
			dec = num / 10;
			uni = num % 10;
			if (dec==uni)
			{
				capi++;
			}
		}
		else if (num>=100&&num<=200)
		{
			cent = num / 100;
			dec = (num % 100) / 10;
			uni = (num % 100) % 10;
			if (cent==uni)
			{
				capi++;
			}
		}
	}
	cout << endl;
	cout << "Hay " << capi << " números capicúas" << endl << endl;
	delete[]ejer9;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	invertir();
	system("pause");
}
