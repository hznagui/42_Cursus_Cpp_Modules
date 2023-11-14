#include <sstream>
#include <iostream>

int main(int argc, char const *argv[])
{
    int a ;

    std::stringstream ss;


    ss << "12331321";


    if (!(ss>>a))
        std::cout << "overflow";
    else
        std::cout << a<< std::endl;
    return 0;
}
