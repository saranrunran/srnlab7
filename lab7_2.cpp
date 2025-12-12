#include <iostream>
using namespace std;

//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

int main() {

    string name;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" << "?????: \n";
    cin.ignore();
    getline(cin, name);
    cout << "\nFahsai: Wow!!! " << name << " is a really cool name.\n";
    
    int id[9];
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id[9];
    cout << "Fahsai: I think you may be GEAR " << 

}