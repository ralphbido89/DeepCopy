#include <iostream>
#include <vector>




int main() {
    

    int quant;
    int choice;

    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0;

    int Total_rooms = 0, Total_pasta = 0;

    std::cout <<"\n\t Quantity of items: ";
    std::cout <<"\n Rooms available";
    std::cin >> Qrooms;


    std::cout <<"\n\t\t Please select from the menu: ";
    std::cout <<"\n\n1. Rooms";
    std::cout <<"\n2. Pasta";
    std::cout <<"\n3. Burger";
    std::cout <<"\n4. Exit";

    std::cout <<"\n\n Please enter your choice";
    std::cin >> choice;

    return 0;
};