#include <iostream>
#include <string>
using namespace std;

class Estacionamento
{
	public:
		Estacionamento ();
		Estacionamento(string placa, string modelo);
		
		string getplaca();
		string getmodelo();
				
		void setplaca(string placa);
		void setmodelo(string modelo);
		
		void toString();

		
		
		
	private:		
		string placa;
		string modelo;

};
