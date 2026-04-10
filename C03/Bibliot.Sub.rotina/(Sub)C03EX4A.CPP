//C03EX4A.CPP

// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
// A fórmula de conversão é F ←  C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <iostream>
#include <print>

using namespace std;

void pausa(void)
{
	println("");
	print("Tecle <Enter> para encerrar");
	cin.get();
}

void calculo(float &f)
{
	float c;
	
	print("Informe a temperatura em Celsius: "); cin >> c;
	cin.ignore(80, '\n');
	printf("");
	
	f = c * 9 / 5 + 32;
	
}

int main(void)
{
	float x;
	calculo(x);
	println("O valor convertido em Fahrenheit é = {:.2f}", x);
	pausa();
	return 0;
	
}
