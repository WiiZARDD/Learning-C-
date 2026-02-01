// Volume Formula: L * W * H

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

void mainMenu();
void calcArea();
void calcVolume();

void mainMenu(){
    int choice;

    do {
        cout << "\nMAIN MENU\n" << endl;
        cout << "1) Volume Calculator" << endl;
        cout << "2) Area Calculator" << endl;
        cout << "3) EXIT" << endl;
        cout << "Pick an option: ";
        cin >> choice;
        if (choice == 1){
            calcVolume();
        }
        if (choice == 2){
            calcArea();
        }
    } while (choice != 3);

}

void calcArea(){
    int length, width;

    string choice;

    do {
        cout << "Pick a length: ";
        cin >> length;
        //cout << "Current length: " << length << endl;
        cout << "Pick width: ";
        cin >> width;
        //cout << "Current width: " << width << endl;
    
        int area = length * width;
        cout << "Total Area: " << area << endl;
    
        cout << "Run it again? (Y / N): ";
        cin >> choice;

    } while (choice.find("Y") == 0 || choice.find("y") == 0);

}

// Volume Calculation Function
void calcVolume(){
    int length, width, height;

    string choice;
    //char choice; [<STRING> IS BETTER SO WE CAN USE (choice.find())]
    // .find() is a method of std::string, which isn't needed for char

    // Begin calculation loop -->
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

        cout << "Run it again? (Y / N): ";
        cin >> choice;

    //} while (choice == 'y' || choice == 'Y');
    } while (choice.find("Y") == 0 || choice.find("y") == 0);

}

int main(){
    mainMenu();
    return 0;

}
