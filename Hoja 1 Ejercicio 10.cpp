#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void sumadig() {
	srand(time(NULL));
	int *ejer10 = new int[10];
	int num, uni, dec, cent;
	int mul3 = 0;
	for (int i = 0; i < 10; i++)
	{
		ejer10[i] = rand() % (201 - 1);
		cout << "Número " << i + 1 << ": " << ejer10[i] << endl;
		num = ejer10[i];
		if (num<10)
		{
			if (num==0||num==3||num==6||num==9)
			{
				mul3++;
			}
		}
		else if (num>=10&&num<=99)
		{
			dec = num / 10;
			uni = num % 10;
			if ((dec+uni)==3|| (dec + uni) == 6|| (dec + uni) == 9|| (dec + uni) == 12|| (dec + uni) == 15|| (dec + uni) == 18)
			{
				mul3++;
			}
		}
		else if (num>=100&&num<=200)
		{
			cent = num / 100;
			dec = (num % 100) / 10;
			uni = (num % 100) % 10;
			if ((cent+dec+uni)==3|| (cent + dec + uni) == 6 || (cent + dec + uni) == 9|| (cent + dec + uni) == 12 || (cent + dec + uni) == 15 || (cent + dec + uni) == 18 || (cent + dec + uni) == 21|| (cent + dec + uni) == 24 || (cent + dec + uni) == 27)
			{
				mul3++;
			}
		}
	}
	cout << endl;
	cout << "Hay " << mul3 << " datos divisibles entre 3" << endl << endl;
	delete[]ejer10;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	sumadig();
	system("pause");
}