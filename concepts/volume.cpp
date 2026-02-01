// Volume Formula: L * W * H

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
    int length;
    int width;
    int height;

    //char choice;
    string choice;

    do{
        cout << endl;
        cout << "Pick a length: ";
        cin >> length;
        //cout << "Current length is: " << length << endl; (DEBUGGING)
        cout << "Pick a width: ";
        cin >> width;
        //cout << "Current width: " << width << endl; (DEBUGGING)
        cout << "Pick a height: ";
        cin >> height;
        //cout << "Current height: " << height << endl; (DEBUGGING)

        /*---------------------------------------------
        | (!cin) means if the input fails...          |
        | [cin.clear()] then reset it                 |
        | [cin.ignore(1000, '\n')] ignore bad letter  |
        | continue; resets the whole loop             |
        ---------------------------------------------*/

        if(!cin){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "You must enter a number...";
            continue;
        }

        int volume = length * width * height;
        cout << endl;
        cout << "Total volume is: " << volume << " " << "[" << length << " * " << width << " * " << height << "]" << endl;
        cout << endl;

        cout << "Run it again?";
        cin >> choice;

    //} while (choice == 'y' || choice == 'Y'); (DEBUGGING)
    } while (choice.find("Y") == 0 || choice.find("y") == 0);

    return 0;

}
