#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream arquivo("vendas.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao criar arquivo." << endl;
        return 0;
    }

    int matricula;
    string nome;
    float vendas[4];
    float media, bonus;

    cout << "Informe a matricula do vendedor: ";
    cin >> matricula;
    cout << "Informe o nome do vendedor: ";
    cin >> nome;
    cout << "Informe as vendas do vendedor nos ultimos 4 meses:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Venda " << i + 1 << ": ";
        cin >> vendas[i];
    }

    media = (vendas[0] + vendas[1] + vendas[2] + vendas[3]) / 4;
    bonus = media * 0.2;

    arquivo << "Matricula: " << matricula << "\nNome: " << nome << "\nMedia: " << media << "\nBonus: " << bonus << " reais (20%)." << endl;

    arquivo.close();

    return 0;
}
