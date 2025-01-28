/*
* Name: Nate O'Brien
* Program: Vectors Lab 2
* Date: 1/27/25
* Extra: uses find to find the value they want
*/


#include <iostream>
#include <vector>

using namespace std;


int main() {
    //defines vector
    vector<string> foods = {"Hamburger", "Mac n Cheese", "Ice Cream", "Pizza"};


    cout << "\n\nFavorite Foods: ";
    for (auto itr = foods.begin(); itr != foods.end(); ++itr) {
        cout << *itr << ", ";
    }


    string food = "";
    cout << "What food do you want to add? ";
    cin >> food;
    // using find, gets the index of the value
    auto index = find(foods.begin(), foods.end(), food);
    //adds the users food
    foods.insert(foods.begin() + index, food);


    cout << "\n\nFavorite Foods: ";
    for (auto itr = foods.begin(); itr != foods.end(); ++itr) {
        cout << *itr << ", ";
    }
   
    return 0;
}
