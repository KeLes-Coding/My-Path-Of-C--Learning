#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_name;

    cout << "Please enter your first name";
    cin >> user_name;
    cout << "\nHello, " << user_name << "... and goodbye!\n";
    cout << "Please enter your last name";

    return 0;    
}