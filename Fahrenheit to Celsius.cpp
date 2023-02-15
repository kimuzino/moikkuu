#include <iostream>

int main(){
    int a;
    int b;
    int c;

    std::cout << "1 celsius to fahrenheit\n";
    std::cout << "2 fahrenheit to celsius\n";
    std::cin >> a;
    if (a == 1){
        std::cout << "Enter celsius : ";
        std::cin >> b;
        c = (b * 1.8f + 32);
        std::cout << "Temperature in fahrenheit : " << c << '\n';
    }
    else if (a == 2){
        std::cout << "Enter fahrenheit : ";
        std::cin >> b;
        c = (b - 32) * 5/9;
        std::cout << "Temperature in celsius : " << c << '\n';
    }
    else {
        std::cout << "haista paska\n";
    }
}