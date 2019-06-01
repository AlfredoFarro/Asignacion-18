#include<iostream>
using namespace std;
void ejer4(int n){
	int *notas = new int[n];
	int mayor = 0;
	int menor = 20;
	double suma = 0;
	double prom;
	int numer=0;
	int rep = 0;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Ingrese la nota del alumno "<<i+1<<": ";
			cin >> notas[i];
		} while (notas[i]<0||notas[i]>20);
		suma += notas[i];
	}
	for (int i = 0; i < n; i++)
	{
		rep = 0;
		for (int j = 0; j < n; j++)
		{
			if (notas[i] == notas[j])
			{
				rep++;
			}
			if (rep >= 2)
			{
				numer = notas[i];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (notas[i] > mayor)
		{
			mayor = notas[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (notas[i] < menor)
		{
			menor = notas[i];
		}
	}
	prom = suma / n;
	cout << endl;
	cout << "El promedio de notas es: " << prom << endl << endl;
	cout << "La moda es: " << numer << endl << endl;
	cout << "La máxima nota es: " << mayor << endl << endl;
	cout << "La mínima nota es: " << menor << endl << endl;
	delete[]notas;
}
void main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	do
	{
		cout << "Ingrese el número de alumnos: ";
		cin >> n;
	} while (n<0);
	ejer4(n);
	system("pause");
}