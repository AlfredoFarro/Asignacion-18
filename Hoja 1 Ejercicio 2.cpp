#include <iostream>
using namespace std;
void gym() {
	int *peso = new int[10];
	int max = peso[0];
	int delgada=0,mediana=0,gruesa=0;
	for (int i = 0; i < 10; i++)
	{
		do
		{
			cout << "Ingrese el peso del cliente " << i + 1 << " :";
			cin >> peso[i];
			if (peso[i]<53)
			{
				delgada++;
			}
			if (peso[i]>=53&&peso[i]<=60)
			{
				mediana++;
			}
			if (peso[i]>60)
			{
				gruesa++;
			}
		} while (peso[i]<0);
	}
	for (int i = 1; i < 10; i++)
	{
		if (peso[i]>max)
		{
			max = peso[i];
		}
	}
	cout << endl;
	cout << "El peso mayor es: " << max << endl << endl;
	cout << "El número de personas con contextura delgada es: " << delgada << endl;
	cout << "El número de personas con contextura mediana es: " << mediana << endl;
	cout << "El número de personas con contextura gruesa es: " << gruesa << endl << endl;
	delete[]peso;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	gym();
	system("pause");
}
