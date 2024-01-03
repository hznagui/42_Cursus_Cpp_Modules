#include <iostream>
#include <cstdlib>

int main() {
    std::string stringValue = "3.14ff";
    
    // Use atof to convert string to float
    float floatValue = static_cast<float>(atof(stringValue.c_str()));

    std::cout << floatValue << std::endl;

    return 0;
}
