#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funcție pentru generarea parolei aleatorii
string generatePassword(int length) {
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string password;

    for (int i = 0; i < length; i++) {
        int index = rand() % characters.length();
        password += characters[index];
    }

    return password;
}

int main() {
    // Inițializarea generatorului de numere aleatoare
    srand(static_cast<unsigned>(time(0)));

    int passwordLength;
    cout << "Introduceți lungimea parolei dorite: ";
    cin >> passwordLength;

    string password = generatePassword(passwordLength);
    cout << "Parola generată: " << password << endl;

    return 0;
}
