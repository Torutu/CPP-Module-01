#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";   // Step 1: Declare and initialize the string variable
    
    std::string* stringPTR = &brain;  // Step 2: Declare a pointer to the string variable
    
    std::string& stringREF = brain;  // Step 3: Declare a reference to the string variable
    
    std::cout << "Memory address of the string variable: " << &brain << std::endl;  // Print memory addresses
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
  
    std::cout << "Value of the string variable: " << brain << std::endl;  // Print values
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
