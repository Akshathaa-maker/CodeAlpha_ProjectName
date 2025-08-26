#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool userExists(const string& username) {
    ifstream file("users.txt");
    string user, pass;
    while (file >> user >> pass) {
        if (user == username)
            return true;
    }
    return false;
}

void registerUser() {
    string username, password;

    cout << "\n--- Registration ---\n";
    cout << "Enter new username: ";
    cin >> username;

    if (userExists(username)) {
        cout << "❌ Username already exists! Try a different one.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << username << " " << password << "\n";
    file.close();

    cout << "✅ Registration successful!\n";
}

int main() {
    registerUser();   // Call the function
    return 0;
}