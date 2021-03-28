//PALINDROME USING STRINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
using std::cout;
using std::endl;

bool Palindrome(std::string &s){
    std::transform(s.begin(), s.end(), s.begin(), ::toupper); //MAKES THE WORD UPPERCASE
    std::string take{s};
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
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    std::cout << std::setw(8) << std::left << Palindrome(temp)  << temp << std::endl;
    std::cout << std::endl;
}