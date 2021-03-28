//PALINDROME USING STRINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using std::cout;
using std::endl;

bool Palindrome(std::string &s){
    std::string take;
    for(auto &a: s){ // CHECKS IF THERE ARE ANY NON ALPHABET CHARACTERS IN THE WORD
        if(std::isalpha(a))
            take.push_back(a);
    }
    std::string collect{take};
    std::reverse(collect.begin(), collect.end());  //MAKES THE CONTENT OF 'COLLECT' REVERSED
    if(collect == take)
        return true;
    else
        return false;
}
int main(){
    std::string temp;
    cout << "Enter the word: ";
    std::cin >> temp;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::toupper); //MAKES THE WORD UPPERCASE
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    std::cout << std::setw(8) << std::left << Palindrome(temp)  << temp << std::endl;
    std::cout << std::endl;
}