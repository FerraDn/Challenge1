
#include <string>
#include <stdio.h>
#include <iostream>

//Supporto per caratteri Unicode-----------
#include <cstdio>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
//-----------------------------------------
using namespace std;

void showMenu();
void EncryptingMenu();
void DecryptingMenu();
string level1_algorithm_encryption(string);
string level1_algorithm_decryption(string);  //---> DA FARE

int main()
{

	SetConsoleOutputCP(65001); //Supporto caratteri unicode


	int selezione = 1;
	while (selezione != 0) {
		showMenu();
		cin >> selezione;

		if (selezione == 1) {
			EncryptingMenu();
		}
		if (selezione == 2) {
			DecryptingMenu();
		}
		system("cls");

	}

	system("PAUSE");
	return 0;
}

void showMenu() {
	cout << "Esercizio di reverse engeenering - Daniele Ferrario - 11/03/19";
	cout << "\n\nBenvenuto nel software\n\n";
	cout << "0) Esci dal programma" << endl;
	cout << "1) Cripta una stringa" << endl;
	printf("2) Decripta una stringa\n");
	
}

void EncryptingMenu() {
	system("cls");

	int livello_sicurezza = 1;

	cout << "\t\t\t\t>FASE DI CRIPTAGGIO<\n\n";
	cout << "\t> Inserire stringa da criptare:\n";

	string frase_iniziale;
	

	cout << "...\n";
	cin.ignore();					//Bisogna usarlo prima di getline()
	getline(cin,frase_iniziale);	// Equivale ad un cin, tuttavia è più accurato per questo tipo di operazione
	cout << "...\n";				// perchè può catturare anche gli spazi
	
	string output;
	if (livello_sicurezza == 1) {
		output = level1_algorithm_encryption(frase_iniziale);
	}
	if (livello_sicurezza == 2) {
		//Non ancora creato
		//output = level2_algorithm_encryption(frase_iniziale, "Oppala");
	}
	
	cout << "\t> Risultato Output:\n";
	cout << "...\n";
	cout << output;
	cout << "\n...\n\n";

	system("pause");
	system("cls");

}

//Caratteri disponibili da 32 a 126 
string level1_algorithm_encryption(string input) {

	for (int i = 0; i < input.length(); i++) {
		//Trova il numero del char
		int index = (int)input[i];
		//Aggiuge tre unità
		index += 3;
		//Se il carattere è un intero maggiore di 126,
		//Aggiungi l'eccesso e sommalo al numero 32 ( numero del primo char )
		if (index > 126) {
			index = index - 126 + 32;
		}
		//Ritrasforma l'intero in un carattere
		input[i] = (char)(index);
	}
	return input;
}

void DecryptingMenu() {
	
	int livello_sicurezza = 1;

	system("cls");
	cout << "\t\t\t\t>FASE DI DECRIPTAGGIO<\n\n";
	cout << "\t> Inserire stringa da decriptare:\n";

	string frase_iniziale;
	cin.ignore();

	cout << "...\n";
	getline(cin, frase_iniziale);	// Equivale ad un cin, tuttavia è più accurato per questo tipo di operazione
	cout << "...\n";				// perchè può catturare anche gli spazi

	string output;
	if (livello_sicurezza == 1) {
		//DA FARE
		output = level1_algorithm_decryption(frase_iniziale);
	}

	cout << "\t> Risultato Output:\n";
	cout << "...\n";
	cout << output;
	cout << "\n...\n\n";

	system("pause");
	system("cls");
}

string level1_algorithm_decryption(string input) {

	//--------------------------//
	//			DA FARE			//
	//--------------------------//

	return input;
}

