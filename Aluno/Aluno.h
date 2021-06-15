#include <iostream>
#include <string>
using namespace std;

class Aluno
{
	public:
		static int quantidade;
		Aluno();
		~Aluno();
		string getNome();
		void setNome(string nome);
		string getSerie();
		void setSerie(string serie);
		string getGrau();
		void setGrau(string grau);
		int getQuantidade();
	private:
		
		string nome;
		string serie;
		string grau;
};