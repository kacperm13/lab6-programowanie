#include <iostream>
using namespace std;
/*
int a = 20;			//z1
int b = 10;
int suma(int a, int b) {
	return a + b;
}
*/
/*
int tab[10];		//z2
int rozmiar = 10;
void usun();
*/
float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;
void przelicz();
void zapisz(float temp1, float temp2);
void wyswietl();
void menu();
int main()
{
	/*
	cout << suma(a, b) << endl;			//z1
	int a = 1;
	int b = 2;
	cout << suma(a, b) << endl;
	*/
	/*
	cout << "Podaj 10 wartosci do tablicy: \n";		//z2
	for (int i=0; i < rozmiar; i++) {
		cin >> tab[i];
	}
	usun();
}
void usun() {
	cout << "Ktora wartosc chcesz usunac? (0-9) \n";
	int numer;
	cin >> numer;
	while (numer < 0 || numer>9) {
		cout << "Bledna wartosc. Podaj ja ponownie.\n";
		cin >> numer;
	}
		rozmiar -= 1;
		tab[numer] = tab[numer + 1];
		for (int i = 0; i < rozmiar; i++) {
			cout << tab[i] << endl;
		}
		*/
	menu();
	switch:	
	przelicz();
	wyswietl();
}
void przelicz() {
	float temp1;
	float temp2;
	cout << "Podaj temperature do przeliczenia: ";
	cin >> temp1;
	temp2 = temp1 + 273.15;
	cout << temp1 << "C = " << temp2 << "F\n";
	INDEKS++;
	zapisz(temp1, temp2);
}
void zapisz(float temp1, float temp2) {
	if (INDEKS-1 < 10) {
		TEMP1[INDEKS-1] = temp1;
		TEMP2[INDEKS-1] = temp2;
	}
	else {
		cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane.\n";
	}
	
}
void wyswietl() {
	for (int i = 0; i <= INDEKS; i++) {
		cout << "<" << INDEKS << ">" << TEMP1[INDEKS] << " -> " << TEMP2[INDEKS];
	}
}
void menu() {
	cout << "Wybierz opcje:";
	cout << "1. Przelicz C->K";
	cout << "2. Wyswietl historie";
}