#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void ejer11(int n) {
	srand(time(NULL));
	int *ejer11 = new int[n];
	int *notas = new int[n];
	int apro = 0;
	int curva;
	for (int i = 0; i < n; i++)
	{
		ejer11[i] = rand() % (20 - 1);
		cout << "El alumno " << i + 1 << " tiene " << ejer11[i] << endl;
		
	}
	cout << endl;
	do
	{
		cout << "Ingrese el valor de la curva: ";
		cin >> curva; 
	} while (curva<0||curva>5);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		notas[i] = ejer11[i] + curva;
		if (notas[i] > 20)
		{
			notas[i] = 20;
			apro++;
			cout << "El alumno " << i + 1 << " después de la curva tiene " << notas[i] << endl;
		}
		else
		{
			notas[i] = notas[i];
			cout << "El alumno " << i + 1 << " después de la curva tiene " << notas[i] << endl;
			if (notas[i] >= 13)
			{
				apro++;
			}
		}
	}
	cout << endl;
	cout << "La cantidad de aprovados es: " << apro << endl << endl;
	delete[]ejer11;
	delete[]notas;
}
int main() {
	setlocale(LC_CTYPE, "spanish");
	int n;
	do
	{
		cout << "Ingrese la cantidad de alumnos: ";
		cin >> n;
	} while (n<0);
	ejer11(n);
	system("pause");
}