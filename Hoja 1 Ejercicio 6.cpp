#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void ejer6(int n) {
	srand(time(NULL));
	int *monto = new int[n];
	int aux=0;
	int cont100 = 0, coni = 0;
	for (int i = 0; i < n; i++)
	{
		monto[i] = 25 + rand() % (500 - 25);
		cout << "La persona " << i + 1 << " gasta: S/" << monto[i] << endl;
		if (monto[i]>=100&&monto[i]<=300)
		{
			cont100++;
		}
		if ((monto[i]%2)!=0)
		{
			coni++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (monto[j]>monto[j+1])
			{
				aux = monto[j];
				monto[j] = monto[j + 1];
				monto[j + 1] = aux;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "El gasto " << i + 1 << " es: S/" << monto[i] << endl;
	}
	cout << endl;
	cout << "El número de personas que gastaron entre 100 y 300 soles en bebidas son: " << cont100 << endl << endl;
	cout << "La cantidad de montos que tiene asociadas una cantidad impar son: " << coni << endl << endl;
	delete[]monto;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	do
	{
		cout << "Ingrese la cantidad de personas: ";
		cin >> n;
	} while (n<0||n>200);
	cout << endl;
	ejer6(n);
	system("pause");
}
