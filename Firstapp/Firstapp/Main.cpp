/**
#include <iostream>
#include <string>

using namespace std;
**/

/**

int main() {

	int number = 10;
	int numbers[3] = { 10, 20, 30 };
	cout << "o valor de numbers é: \n";
	cout << numbers[0];
	cout << "\n";
	cout << numbers[2];
	cout << "\n";
	system("PAUSE");

	//rodou com sucesso
	return 0;
}
**/

/**
int main() {

	int numbers[4] = { 10, 20, 30 , 40 };
	cout << "O valor de numbers é: \n";

	numbers[1] = 50;

	cout << "\n";
	cout << numbers[0];
	cout << "\n";
	cout << numbers[1];
	cout << "\n";
	cout << numbers[2];
	cout << "\n";
	cout << numbers[3];
	cout << "\n";

	system("PAUSE");
	
	//RODOU COM SUCESSO

	return 0;

}
**/

/**
int main() {

	int numbers[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	cout << "O valor de numbers é: \n";

	for( int i = 0; i < 10; i += 1) {
		cout << i << endl;
	}

		system("PAUSE");
	//RODOU COM SUCESSO

	return 0;
}
**/

/**
 int main() {

	int numbers[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	cout << "O valor de numbers e: \n";
	for (int i = 0; i < 10; i += 1) {
		cout << "O valor da posicao: " << i << " e de: " << numbers[i] << endl;

	}

	system("PAUSE");
	//RODOU COM SUCESSO

	return 0;
} 
**/

/**
int main() {

	char letters[10] = { 'a', 'b', 'c', 'd','e', 'f','g', 'h', 'i', 'j',};
	

	for (int i = 0; i < 10; i += 1) {
		cout << "O valor da posicao: " << i << " e de: " << letters[i] << endl;

	}

	system("PAUSE");
	//RODOU COM SUCESSO

	return 0;
}**/


/**
int main() {

User user;

user.name = "Jordan";
user.lastname = "Zanoni";
user.age = 25;
user.phonenumber = 11982324899;

return 0;
}**\


/**
double soma() {
return 0.0F;
}

string name() {
return "Douglas";
}


string lastName() {
return "Barreto";
}

float soma() {
return 0.0F;
}

void nada() {

}**\**/


//Declação

/**

struct User {

	// This is the user's name

	string name;

	// This is the user's last name

	string lastname;

	// This is the user's age

	int age;

	//This is the phone user's number

	int phonenumber;
	
};

//Instanciando uma variavel do tipo User


**/

/**

int main() {

	User user = User();

	
	user.name = "Jordan";
	user.lastname = "Zanoni";
	user.age = 25;
	user.phonenumber = 982324899;
	

	cout << "Digite seu nome " << endl;
	cin >> user.name;

	cout << "Digite seu sobrenome " << endl;
	cin >> user.lastname;

	cout << "Digite sua idade " << endl;
	cin >> user.age;

	cout << "Digite seu telefone " << endl;
	cin >> user.phonenumber;


	if (user.name == "Isaque") {
		cout << "Meu nome: " << user.name << endl;

	}
	else {
		cout << "Nome Invalido " << endl;

	}
			
	if (user.lastname == "Rodrigues") {
		cout << "Meu sobrenome: " << user.lastname << endl;

	}
	else {
		cout << "Sobrenome Invalido " << endl;

	}



	if (user.age == 26) {
		cout << "Minha idade: " << user.age << endl;

	}
	else {
		cout << "Idade Invalida " << endl;

	}

	
	if (user.phonenumber == 987) {
		cout << "Meu telefone: " << user.phonenumber << endl;

	}
	else {
		cout << "Telefone Invalido " << endl;

	}
	
	
	system("pause");

	return 0;

};**/

/**
struct User {
	string nome;
	int idade;
	string email;
	int cpf;
}; **/

/**
int main() {
	User user = User();
	
	cout << "Digite seu nome: " << endl;
	cin >> user.nome;	

	cout << "Digite sua idade: " << endl;
	cin >> user.idade;
	
	cout << "Digite seu email: " << endl;
	cin >> user.email;
		
	cout << "Digite seu CPF: " << endl;
	cin >> user.cpf;
	

	// Printando na tela
	cout << user.nome << endl;

	cout << user.email << endl;

	cout << user.cpf << endl;

	if (user.idade > 17) {

		cout << user.idade << endl;

	}

	else {
		cout << "Menor de idade aqui não lek" << endl;

	};

	int number = user.idade % 2;

	if (number == 0){
		cout << " O resto e: " << number << endl;
		
	}
	else
	{
		cout << " idade do usuario e impar" << endl;
	 
	}
	

	system("PAUSE");
	return 0;


}
**/

// Variavel sempre com letra minuscula e estrutura com letra maiuscula

// Declarando a Função CLASS!!!!!!!!
// estrutura onde agrega atributos ativos e fisicos de algum objeto real.

/**
class Character {
public:
	string name;
	int speedy = 0;
	int stamina = 0;
	int gender = 0;
	int kickforce = 0;

	void run() {}
	void jump() {}
	void kick(){
		cout << "Eu estou chutando a bola" << endl;
	}
	

};

class Kaka: public Character {
public:
	//Inicializadores sao o ponto de partida da classe
	// voce deve herdar um classe com a outra
	// No caso instanciando kaka com os atributos da class Character

	Kaka() {
		name = "Kaka";
		speedy = 70;
		stamina = 75;
		gender = 1;
		kickforce = 85;
	
	};
	 
		
};


class Ronaldinho : public Character {
public:
	// Inicializadores sao ponto importante da classe

	Ronaldinho() {

	};


};



int main() {

	Character character = Kaka();

	cout << "Jogador: " << character.name << endl;
	cout << "speedy: " << character.speedy << endl;
	cout << "stamina: " << character.stamina << endl;
	cout << "Kick Force: " << character.kickforce << endl;

	if (character.gender ==1) {
		cout << "Jogador Masculino" << endl;

	}
	else {
		cout << "Jogador Feminino" << endl;

	};
	
	character.kick();

	system("PAUSE");
	return 0;
	
}**/




