// TravelAgency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<map>
#include"Customer.h"
#include"Locations.h"

Customer mainMenu();
int getLocationChoice();

int main() {
    float budget;
    Customer user = mainMenu();
    std::cout << "Great! Now, let's get you started on a new trip! What's your budget?: ";
    std::cin >> budget;
    user.setBudget(budget);
     
    return 0;
}

Customer mainMenu() {
    std::string first, last;
    int locationID;
    std::cout << "Welcome to Mo's and Adebola's Travel Agency! Please login with your full name (<first> <last>): ";
    std::cin >> first >> last;
    std::cout << "Wonderful! Now, which one of our great locations are you logging in from? (Choose from the list of options)" << std::endl;
    
    locationID = getLocationChoice();

    return Customer(first, last, locationID);
}

int getLocationChoice() {
    int choice;
    for (int i = 0; i < LOCATION_AMT; i++) {
        std::cout << i << ": " << locations[i] << std::endl;
    }
    std::cout << "Enter Choice Here: ";
    std::cin >> choice;
    return choice;
}
