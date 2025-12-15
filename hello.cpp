#include <iostream>
#include <string>

int main() {
    std::cout << "Why did the chicken cross the road?" << std::endl;

    std::cin >> std::ws; 
    std::string input;
    std::getline(std::cin, input); 
    
    if (input == "to get to the other side"){
        std::cout << "fk u, you already know it!" << std::endl;
    } else {
        std::cout << "To get to the other side!" << std::endl;
    }
    
    std::cout << "Press Enter to exit..." << std::endl; 
    std::cin.get();
    return 0;
}