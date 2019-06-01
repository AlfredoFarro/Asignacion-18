#include<iostream>
using namespace std;
void ejer8(int n) {
	int *notas = new int[n];
	int frecuencia[21] = { 0 };
	int max = notas[0];
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Ingrese la nota del alumno " << i + 1 << ": ";
			cin >> notas[i];
			frecuencia[notas[i]]++;
		} while (n<0||n>20);
	}
	cout << endl;
	for (int i = 0; i <= 20; i++)
	{
		cout << "El nota " << i << " salió " << frecuencia[i] << " veces" << endl;
	}
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		if (notas[i]>max)
		{
			max = notas[i];
		}
	}
	cout << "La nota que más se repite es: " << max << endl << endl;
	delete[]notas;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	do
	{
		cout << "Ingrese la cantidad de alumnos: ";
		cin >> n;
	} while (n<=0);
	ejer8(n);
	system("pause");
}