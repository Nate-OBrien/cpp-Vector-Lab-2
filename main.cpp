/*
* Name: Nate O'Brien
* Program: Vectors Lab 2
* Date: 1/27/25
* Extra: uses find to find the index of the value they want
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    //defines vector
    vector<string> foods = {"Hamburger", "Mac n Cheese", "Ice Cream", "Pizza"};


    cout << "\n\nFavorite Foods: ";
    for (auto itr = foods.begin(); itr != foods.end(); ++itr) {
        cout << *itr << (itr == foods.end() - 1 ? "." : ", "); // uses ternary to either print comma or period
    }

    //gets input for the new food and the one to be replaced
    string food = "";
    string foodInd = "";
    cout << "\nWhat food do you want to add? ";
    getline(cin, food);
    cout << "\nWhat food do you want to add this to the left of? ";
    getline(cin, foodInd);
    // using find, gets the index of the value
    auto index = find(foods.begin(), foods.end(), foodInd);
    //adds the users food
    foods.insert(index, food);
    
    //reprints vector
    cout << "\n\nUpdated Favorite Foods: ";
    for (auto itr = foods.begin(); itr != foods.end(); ++itr) {
        cout << *itr << (itr == foods.end() - 1 ? "." : ", "); 
    }
    
    // gets input
    string deleted = "";
    cout << "\nWhat food is your least favorite? ";
    getline(cin, deleted);
    // gets the food to delete with find
    auto deleteIndex = find(foods.begin(), foods.end(), deleted);
    foods.erase(deleteIndex);
    
    //reprints vector
    cout << "\n\nUpdated Favorite Foods: ";
    for (auto itr = foods.begin(); itr != foods.end(); ++itr) {
        cout << *itr << (itr == foods.end() - 1 ? "." : ", "); 
    }
    
   
    return 0;
}
