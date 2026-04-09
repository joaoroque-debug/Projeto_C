// C05E6H.CPP

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)
{
	int64_t b, e, r = 1, i = 1; // aqui se colocar uint da algum erro se colocado um número negativo, se fosse mostrar cada valor da fatorial, ai colocava i = 0 
	
	while (true)
		{
			cout << "Informe um valor para a base : ";
			if ( cin >> b ) 
				{ 
					if ( b >= 0 ) 
						break;
					else 
						{	
							cout << "\nInforme um valor igual ou maior que 0" << endl;
							cout << endl;
						}
				}
			else
				{ 
					cout << "\nERRO: Informe apenas valores numericos" << endl;
					cin.clear();
					cin.ignore(10000, '\n');
					cout << endl;
				}
		}		
	while (true)
		{
			cout << "\nInforme um valor para a expoente : ";
			if ( cin >> e ) 
				{ 
					if ( e >= 0 ) 
						break;
					else 
						cout << "\nInforme um valor igual ou maior que 0" << endl; 
				}
			else
				{ 
					cout << "\nERRO: Informe apenas valores numericos";
					cin.clear();
					cin.ignore(10000, '\n');
					cout << endl;
				}
		}	
	while ( i <= e )
		{ 
			r = r * b;
			++i;
		} 
	 
	cout << b << "^" << e << " = " << r; 

	cout << endl << endl;
	cout << "Tecle <Enter> para encerrar ... ";
	cin.get();
	return 0;
}

	
