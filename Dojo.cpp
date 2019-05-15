#include<iostream>
#include<string>

using namespace std;

typedef struct {
	int ID;
	int numPag;
	string nome;
	string autor;

}LIVRO;

int quantLivro = 0;
LIVRO biblioteca[100];

void adicionar(){
	if(quantLivro == 100){
		cout << "Biblioteca cheia! " << endl;
		return;
	}

    LIVRO novoLivro;
	cout << "Insira o ID: " << endl;
	cin >> novoLivro.ID;
	cout << endl;
	cout << "Informe o nome do livro: " << endl;
	cin.ignore();
	getline(cin, novoLivro.nome);
	cout << endl;
	cout << "Informe o nome do autor: " << endl;
	getline(cin, novoLivro.autor);
	cout << endl;
	cout << "Insira o numero de paginas: " << endl;
	cin >> novoLivro.numPag;
	biblioteca[quantLivro] = novoLivro;
	quantLivro++;
}


 void exibirLivro(){
     int id;
     cout << endl;
     cout << "Informe o ID: " << endl;
     cin >> id;
     for(int i = 0; i < quantLivro; i++){
        if(id == biblioteca[i].ID){
            cout << "Nome do livro: " << biblioteca[i].nome << endl;
            cout << "Autor: " << biblioteca[i].autor << endl;
            cout << "Numero de paginas: " << biblioteca[i].numPag << endl;
            return;
        }
    }
    cout << "Livro nao encontrado!" << endl;
 }

 void exibirBiblioteca(){
     for(int i = 0; i < quantLivro; i++){
         cout << "ID: " << biblioteca[i].ID << endl;
         cout << "Nome do livro: " << biblioteca[i].nome << endl;
         cout << "Autor: " << biblioteca[i].autor << endl;
         cout << "Numero de paginas: " << biblioteca[i].numPag << endl;
    }
 }


int main(){
    int resp = 0;

    do{
        cout << endl;
        cout << "1- Adicionar Novo Livro " << endl;
        cout << "2- Exibir Livro " << endl;
        cout << "3- Exibir Biblioteca " << endl;
        cout << "4- Fechar Programa " << endl;

        cin >> resp;

        switch(resp){
        case 1:
            adicionar();
            break;
        case 2:
            exibirLivro();
            break;
        case 3:
            exibirBiblioteca();
            break;
        case 4:
            cout << "Fim do programa....." << endl;
            break;
        default:
            cout << "Operacao nao encontrada" << endl;
        }
    }while(resp != 4);

	return 0;
}
