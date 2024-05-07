#include <iostream>
#include <string>
int main() 
{
    std::string hello = "Hello, World!";
    for (int i = hello.length() - 1; i >= 0; --i) {
        std::cout << hello[i];
    }
    std::cout << std::endl;
    return 0;
}
//this will print string in reverse order...
//output:-!dlroW ,olleH