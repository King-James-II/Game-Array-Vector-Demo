// Demonstrates the use of arrays and vectors in a video game context
#include <iostream>
#include <vector>
using namespace std;

// Function to print player's inventory
void printInventory(int inventory[], int size) {
    cout << "Player's Inventory: ";
    for (int i = 0; i < size; ++i) {
        cout << inventory[i] << " ";
    }
    cout << endl << endl;
}

// Function to print a 2D map of the game world
void printMap(char map[][5], int rows, int cols) {
    cout << "Game Map:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Example of player's inventory
    int inventory[5] = {1, 2, 3, 4, 5};
    printInventory(inventory, 5);

    // Example of a 2D game map
    char gameMap[3][5] = {
        {'#', '#', '#', '#', '#'},
        {'#', 'P', '#', 'E', '#'},
        {'#', '#', '#', '#', '#'}
    };
    printMap(gameMap, 3, 5);

    // Example of initializing and printing player's abilities
    vector<string> abilities = {"Fireball", "Heal", "Shield", "Teleport"};
    cout << "Player's Abilities: ";
    for (const string& ability : abilities) {
        cout << ability << " ";
    }
    cout << endl << endl;

    // Example of obtaining a new ability and using it
    abilities.push_back("Invisibility");
    cout << "Updated Player's Abilities after learning Invisibility: ";
    for (const string& ability : abilities) {
        cout << ability << " ";
    }
    cout << endl << endl;
    
    // Accessing values within the player's abilities
    cout << "Accessing abilities within the vector: ";
    cout << "First ability: " << abilities[0] << ", Second ability: " << abilities[1] << endl;

    return 0;
}
