#include <iostream>

using namespace std;

    bool dataValida(int _dia, int _mes, int _ano) {
        if (_ano < 1900 || _ano > 2100) { return false; }
        if (_mes < 1 || _mes > 12) { return false; }
        int diasNoMes = 0;
        if (_mes == 2) {
            diasNoMes = 
            (_ano % 4 == 0 && (_ano % 100 != 0 || _ano % 400 == 0)) ? 29 : 28;
        } else if (_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11) {
            diasNoMes = 30;
        } else {
            diasNoMes = 31;
        }
        if (_dia < 1 || _dia > diasNoMes) { return false; }

        return true;

    }


int main(){
    int dia, mes, ano;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> dia;
    cin.ignore();
    cin >> mes;
    cin.ignore();
    cin >> ano;
    
    string nomesMeses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    if(dataValida(dia,mes,ano)){
        cout << "Data válida" << endl;
        cout << dia << "/";
        cout << mes << "/";
        cout << ano << endl;
        cout << "-----------------------------------------------------------------------\n";
        cout << "Data por extenso: " << dia << " de " << nomesMeses[mes - 1] << " de " << ano << endl;
    }
    else{
        cout << "Data inválida" << endl;
      
    }

    
    return 0;
}