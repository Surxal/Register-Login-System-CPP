#include <iostream>
#include <map>

using namespace std;


int main(){
    
    map <string, string> accounts;


    string regOrLog;
    cout << "Register or Login?: " << endl;
    cout << "(R) to register" << endl;
    cout << "Enter: ";
    cin >> regOrLog;

    if (regOrLog == "R" || "r") {
        string username;
        string password;

        cout << "Enter username: ";
        cin >> username;
        cout << endl;

        cout << "Enter Password: ";
        cin >> password;
        cout << endl;

        accounts.insert({username, password});

        string login;
        cout << "Would you like to login? (Y/N): ";
        cin >> login;

        if(login == "y" || "Y") {
            string username;
            string password;

            cout << "Enter username: ";
            cin >> username;
            cout << endl;

            cout << "Enter Password: ";
            cin >> password;
            cout << endl;

            for (auto itr = accounts.begin(); itr != accounts.end(); ++itr) {
                    if (itr->first == username && itr->second == password) {
                        cout << "Login Successful";
                    }
                    else {
                        cout << "Wrong username or password";
                    }
            }

        }   

    }
    else {
        cout << "Invalid Command" << endl;
    }


    return 0;
}