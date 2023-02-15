#include <iostream>

int main(){
    std::cout << "Enter a word : ";
    std::string word;
    getline(std::cin, word);
    std::cout << "The word " << word << " has " << word.length() << " letters.\n";
}