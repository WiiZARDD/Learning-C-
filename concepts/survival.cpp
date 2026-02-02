// WORK IN PROGRESS... (WiiZARDD)
// https://github.com/WiiZARDD

/*=----------|
| @ = Player |
| 🌲 = Tree   |
| ~~~ = River |
| 🐺 = Wolf   |
| ⛺ = Camp   |
| 🔥 = Fire   |
| 🪵 = Wood   |
| 🐟 = Fish   |
------------=*/

#include <iostream>
#include <cstdlib> // C Standard Lib
#include <ctime> // C Time
#include <unistd.h> // Uni Standard Header
#include <thread>
#include <chrono>

using std::endl;
using std::cout;
using std::cin;

// Default balance
double balance = 0.00;

// Clear Screen Function (If windows then cls else clear)
void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void loadingDots(){
  
    int delay = 0;
  
    do {
        for (int i = 0; i <= 3; i++){
            cout << "\rLoading";
          
            for (int j = 0; j < i; j++){
                cout << ".";
            }
          
            cout << "   ";
            cout.flush();
            std::this_thread::sleep_for(std::chrono::seconds(1));
            //sleep(1); --> THIS WILL BREAK ON WINDOWS, ONLY WORKS ON MAC...
            delay++;
        }
      
    } while (delay <= 3);
  
    cout << "\n";
}

void playerInventory(){
    // More items coming soon as well as crafting and smelting...
    int wood = 0;
    int fish = 0;
    int chance = rand() % 3; // rand() is based on set random from srand() @ main(){

    cout << "Wood: " << wood << endl;
    cout << "Fish: " << fish << endl;
    cout << endl;
  
    loadingDots();
  
    cout << "Current Chance: " << chance << endl;
}

void levelOne(){
    int choice;

    cout << "\nLEVEL 1 - THE FOREST\n" << endl;
    cout << "===============================" << endl;
    cout << "|  🌲  🌲  🌲   ~~~  🌲 🌲 🌲 |" << endl;
    cout << "|  🌲   @     🌲  ~~~ 🌲   🐺 |" << endl;
    cout << "|  🌲  🌲  🌲  ~~~   🌲 🌲 🌲 |" << endl;
    cout << "|       ⛺        🔥          |" << endl;
    cout << "|  🌲  🌲     🪵   🌲   🌲     |" << endl;
    cout << "|         🐟    ~~~           |" << endl;
    cout << "===============================" << endl;
  
    cout << "\nYou lurk in the forest...\n";
    cout << endl;
  
    cout << "1) Inventory" << endl;
    cout << "2) Move forward" << endl;
    cout << "3) Turn around" << endl;
    cin >> choice;
    clearScreen();
  
    if (choice == 1){
        playerInventory();
      
    } else if (choice == 2){
        cout << "===============================" << endl;
        cout << "|  🌲  🌲 [🌲]   ~~~  🌲 🌲 🌲 |" << endl;
        cout << "|  🌲      @  [🌲]  ~~~ 🌲   🐺 |" << endl;
        cout << "|  🌲  🌲 [🌲]  ~~~   🌲 🌲 🌲 |" << endl;
        cout << "|       ⛺        🔥          |" << endl;
        cout << "|  🌲  🌲     🪵   🌲   🌲     |" << endl;
        cout << "|         🐟    ~~~           |" << endl;
        cout << "===============================" << endl;
      
        cout << "\nThere are a trees nearby!" << endl;
      
    } else if (choice == 3){
        cout << "You chose 3! (DEBUGGING)";
    }
}



/*



=========================== LEVELS START ===========================



*/



// DESERT LEVEL
void levelTwo() {
    cout << "===============================" << endl;
    cout << "|  🏜️  🏜️  🏜️     ☀️    🏜️  🏜️ |" << endl;
    cout << "|  🏜️   @     🏜️     ☀️    🐍 |" << endl;
    cout << "|  🏜️  🏜️  🏜️     ☀️    🏜️  🏜️ |" << endl;
    cout << "|        🏺        🔥          |" << endl;
    cout << "|  🏜️  🏜️     💎     🏜️   🏜️ |" << endl;
    cout << "|         🦂                |" << endl;
    cout << "===============================" << endl;
}

// ICE LEVEL
void levelThree() {
    cout << "===============================" << endl;
    cout << "|  ❄️  ❄️  ❄️    ~~~   ❄️  ❄️  ❄️ |" << endl;
    cout << "|  ❄️   @    ❄️    ~~~   ❄️   🐻 |" << endl;
    cout << "|  ❄️  ❄️  ❄️    ~~~   ❄️  ❄️  ❄️ |" << endl;
    cout << "|       🏠        🔥          |" << endl;
    cout << "|  ❄️  ❄️     🧊     ❄️   ❄️    |" << endl;
    cout << "|         🐧    ~~~            |" << endl;
    cout << "===============================" << endl;
}

// VOLCANO LEVEL
void levelFour() {
    cout << "===============================" << endl;
    cout << "|  🌋  🌋  🌋    ###   🌋  🌋  🌋 |" << endl;
    cout << "|  🌋   @    🌋    ###   🌋   🐉 |" << endl;
    cout << "|  🌋  🌋  🌋    ###   🌋  🌋  🌋 |" << endl;
    cout << "|       🛡️        🔥          |" << endl;
    cout << "|  🌋  🌋     💎     🌋   🌋    |" << endl;
    cout << "|         🔥    ###            |" << endl;
    cout << "===============================" << endl;
}

// JUNGLE LEVEL
void levelFive() {
    cout << "===============================" << endl;
    cout << "|  🌴  🌴  🌴    ~~~   🌴  🌴  🌴 |" << endl;
    cout << "|  🌴   @    🌴    ~~~   🌴   🐆 |" << endl;
    cout << "|  🌴  🌴  🌴    ~~~   🌴  🌴  🌴 |" << endl;
    cout << "|       🗿        🔥          |" << endl;
    cout << "|  🌴  🌴     🏹     🌴   🌴    |" << endl;
    cout << "|         🐒    ~~~            |" << endl;
    cout << "===============================" << endl;
}

// BOSS LEVEL
void levelSix() {
    cout << "===============================" << endl;
    cout << "|  🏰  🏰  🏰    ===   🏰  🏰  🏰 |" << endl;
    cout << "|  🏰   @    🏰    ===   🏰   👑 |" << endl;
    cout << "|  🏰  🏰  🏰    ===   🏰  🏰  🏰 |" << endl;
    cout << "|       ⚔️        🔥          |" << endl;
    cout << "|  🏰  🏰     💎     🏰   🏰    |" << endl;
    cout << "|         👹    ===            |" << endl;
    cout << "===============================" << endl;
}



/*



=========================== LEVELS END ===========================



*/


// Render the world
void world() {
    levelOne();
}

// Main Menu Function
void mainMenu(){
    int choice;
  
    cout << "\n-- SURVIVAL GAME --\n" << endl;
    cout << "Current Balance: " << balance << endl;
    cout << endl;
    cout << "---------------\n" << endl;
  
    cout << "1) PLAY GAME" << endl;
    cout << "2) BANKING" << endl;
    cout << "3) EXIT" << endl;
    cin >> choice;
    clearScreen();
  
    if (choice == 1){
        world();
      
    } else if (choice == 2){
        cout << "You chose 2!";
    }

}

// Main Program
int main(){
    srand(time(0)); // Set random number based on current second (time)
    mainMenu();
  
    return 0;
}
