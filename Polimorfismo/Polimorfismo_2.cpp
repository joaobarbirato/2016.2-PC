#include <iostream>
using namespace std;

class Conta {
public:
    Conta(float saldo_inicial = 0) {
        float saldo = saldo_inicial;
    };
    virtual void deposito(float value)  {
        this->saldo += value;
    };

    virtual bool saque(float value) = 0;

    void set_saldo(float value) {
        this->saldo = value;
    }
    float get_saldo() {
        return this->saldo;
    }
    virtual bool rende() = 0;
private:
    float saldo;
};

class ContaCorrente :public Conta {
public:
    ContaCorrente(float v_saldo=0, float cheque= 500): Conta(v_saldo){
        this->chequeEspecial = cheque;
    };

    void deposito(float value){
        set_saldo(get_saldo() + value);
    };

    bool saque(float value){
        float new_saldo = get_saldo() - value;
        if (new_saldo >= chequeEspecial) {
            set_saldo(new_saldo);
            return true;
        }
        return false;
    };

    bool rende () { };

private:
    float chequeEspecial;
};

class Poupanca:public Conta {
public:
    Poupanca(float v_saldo=0, float juros_v= 0.005): Conta(v_saldo){
        this->juros = juros_v;
    };

    void deposito(float value) {
        set_saldo(get_saldo() + value);
    };

    bool saque(float value) {
        float new_saldo = get_saldo() - value;
        if (new_saldo >= 0) {
            set_saldo(new_saldo);
            return true;
        }
        return false;
    };

    bool rende() {
        set_saldo(get_saldo() + get_saldo() * this->juros);
    };

private:
    float juros;
};

int main () {
    Conta *account;

    /*account = new Conta();
    account->deposito(100);
    cout << "Saldo na Conta: " <<account->get_saldo() << endl;
    account->saque(300);
    cout << "Novo saldo em conta: " << account->get_saldo() << endl << endl;
    */

    account = new ContaCorrente(0, 200);
    account->deposito(200);
    cout << "Saldo na Conta Corrente: " << account->get_saldo() << endl;
    account->saque(350);
    cout << "Novo saldo em conta: " << account->get_saldo() << endl << endl;

    account = new Poupanca(0, 0.1);
    account->deposito(100);
    cout << "Saldo na Conta Poupanca: " << account->get_saldo() << endl;
    account->saque(350);
    cout << "Novo saldo em conta: " << account->get_saldo() << endl;
    account->rende();
    cout << "Novo saldo em conta: " << account->get_saldo() << endl << endl;

    delete account;


    return 0;
}
