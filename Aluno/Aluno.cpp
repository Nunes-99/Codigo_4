#include "Aluno.h"
using namespace std;

int Aluno::quantidade{ 
	0 
};
Aluno::Aluno(){
	quantidade++;
}
Aluno::~Aluno(){
	quantidade--;
	cout<<"Ow para de deletar alunos"<<endl;
}
string Aluno::getNome(){
	return nome;
}
void Aluno::setNome(string nome){
	this->nome = nome;
}
string Aluno::getSerie(){
	return serie;
}
void Aluno::setSerie(string serie){
	this->serie = serie;
}
string Aluno::getGrau(){
	return grau;
}
void Aluno::setGrau(string grau){
	this->grau = grau;
}


