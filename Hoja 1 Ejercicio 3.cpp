#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void edad(int n) {
	int *edad = new int[n];
	int &min = edad[0];
	int k=0;
	int conta = 0;
	int busca;
	bool encontrado = 0;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		edad[i] = 1+rand() % (101-1);
		if (edad[i]>=30&&edad[i]<=50)
		{
			conta++;
		}
		cout << "La persona " << i + 1 << " tiene: " << edad[i] << " a�os" << endl;
	}
	for (int i = 1; i < n; i++)
	{
		if (edad[i]<min)
		{
			min = edad[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (edad[i]==min)
		{
			k = i+1;
		}
	}
	cout << endl;
	cout << "La menor edad es: " << min << " a�os y la tiene la persona n�mero: " << k << endl << endl;
	cout << "El n�mero de personas que tienen entre 30 y 50 a�os son: " << conta << endl << endl;
	cout << "Ingrese la edad a buscar: ";
	cin >> busca;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (edad[i]==busca)
		{
			encontrado = 1;
		}
	}
	if (encontrado==1)
	{
		cout << "Se encontr� la edad" << endl << endl;
	}
	else
	{
		cout << "No se encontr� la edad" << endl << endl;
	}
	delete[]edad;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	do
	{
	cout << "Ingrese la cantidad de personas: ";
	cin >> n;
	} while (n<=0||n>100);
	edad(n);
	system("pause");
}