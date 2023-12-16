#include<fstream>
#include <iostream>
#include<string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string id;
    string name;
    string age;
    string another;
    bool yes = true;
    ofstream test("1.txt");
    if (!test.is_open()) {
        cout << "Eror!!!" << endl;
    }
    cout << "Enter information" << endl;
    do
    {
        cout << "Enter you id: ";
        cin >> id;
        test << id << ",";
        cout << "Enter you name: ";
        cin >> name;
        test << name << ",";
        cout << "Enter you age: ";
        cin >> age;
        test << age << endl;
        cout << "Another? ";
        cin >> another;
        if (another == "yes") {
            
        }
        else {
            yes = false;
        }
    } while (yes==true);

    test.close();
}
