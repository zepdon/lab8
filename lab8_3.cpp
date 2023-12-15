/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <string>

using namespace std;

int age , height , bounty;
string character;

int main(){
    cout << "Enter your age: ";
    cin >> age;
    //cout << endl;
    if (age <=25)
    {
        cout << "Enter your height: ";
        cin >> height;
        //cout << endl;
        if (height < 100)
        {
            character = "Chopper";
        } else if (height < 180 ){
            character = "Usopp";
        } else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            //cout << endl;
            if (bounty <= 1100000000)
            {
                character = "Sanji";
            } else {
                character = "Zoro";
            }
            
        }
        
    } else if (age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        //cout << endl;
        if (bounty <= 500000000)
        {
            character = "Franky";
        } else {
            character = "Jinbe";
        }
        
    } else {
        character = "Brook";
    }
    
    cout << "Your character = "<< character;
}