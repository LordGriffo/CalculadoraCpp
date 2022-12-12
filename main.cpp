#include <iostream>
#include <ostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    int num1, num2;

    cout << "Seja bem vindo a nossa primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "+: " << num1 + num2 << endl;
    cout << "-: " << num1 - num2 << endl;
    cout << "*: " << num1 * num2 << endl;
    cout << "/: " << num1 / num2 << endl;
	cout << "π: " << "3,14159265358979323846" << endl;
    return 0;
}
