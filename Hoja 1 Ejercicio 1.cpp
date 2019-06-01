#include<iostream>
#include<conio.h>
using namespace std;
void nota() {
	int *notas = new int[6];
	int aux;
	double suma=0;
	double prom;
	for (int i = 0; i < 6; i++)
	{
		do
		{
			cout << "Ingrese la nota " << i + 1 << " :";
			cin >> notas[i];
		} while (notas[i]<0||notas[i]>20);
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = i+1; j < 6; j++)
		{
			if (notas[i]>notas[j])
			{
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
		}
	}
	cout << endl;
	cout << "La nota que no se considerará en el promedio es: " << notas[0] << endl << endl;
	for (int i = 0; i < 6; i++)
	{
		notas[0] = 0;
		suma += notas[i];
	}
	prom = suma / 5.0;
	cout << "El promedio es: " << prom << endl << endl;
	delete[]notas;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	nota();
	system("pause");
}
