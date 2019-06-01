#include<iostream>
using namespace std;
void ejer5(int n) {
	int *notas = new int[n];
	int con00 = 0, con20 = 0, conapr = 0, condes = 0;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Ingrese la nota del alumno " << i + 1 << " :";
			cin >> notas[i];
			if (notas[i]==0)
			{
				con00++;
			}
			if (notas[i]==20)
			{
				con20++;
			}
			if (notas[i]>=13)
			{
				conapr++;
			}
			if (notas[i]<13)
			{
				condes++;
			}
		} while (notas[i]<0||notas[i]>20);
	}
	cout << endl;
	cout << "La cantidad de personas que obtuvieron 00 son: " << con00 << endl << endl;
	cout << "La cantidad de personas que obtuvieron 20 son: " << con20 << endl << endl;
	cout << "La cantidad de personas aprobadas son: " << conapr << endl << endl;
	cout << "La cantidad de personas desaprobadas son: " << condes << endl << endl;
	delete[]notas;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	do
	{
		cout << "Ingrese la cantidad de alumnos: ";
		cin >> n;
	} while (n<=0||n>40);
	ejer5(n);
	system("pause");
}