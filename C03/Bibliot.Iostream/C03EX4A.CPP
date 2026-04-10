//C03EX4A.CPP

// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
// A fórmula de conversão é F ←  C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <locale>

using namespace std;


int main(void)
{
	setlocale(LC_ALL, "Portuguese_Brazil.1252");
	SetConsoleCP(1252);
	
	wcout << setprecision(2) << fixed << right; 
	
	float f, c;
	
	wcout << L"Informe a temperatura em Celsius: "; cin >> c;
	cin.ignore(80, '\n');
	cout << endl;
	
	f = c * 9 / 5 + 32;
	
	wcout << L"O valor convertido em Fahrenheit é = " << f << L"°";
	
	wcout << endl << endl;
	wcout << L"Tecle <Enter> para encerrar";
	cin.get();
	return 0;
	
}
