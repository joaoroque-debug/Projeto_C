//C03EX4A.CPP

// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
// A fórmula de conversão é F ←  C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
	
	float f, c;
	
	print("Informe a temperatura em Celsius: "); cin >> c;
	cin.ignore(80, '\n');
	printf("");
	
	f = c * 9 / 5 + 32;
	
	print("O valor convertido em Fahrenheit é = {:.2f}", f);
	
	println("");
	print("Tecle <Enter> para encerrar");
	cin.get();
	return 0;
	
}
