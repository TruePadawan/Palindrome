#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>

bool is_palindrome(std::string& s)
{
    std::deque<char> dek;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        for(auto &a:s){
            if(std::isupper(a))
                dek.push_back(a);
        }
    std::deque<char> kek;
    int take{0};
    for(size_t i{0}; i < dek.size(); ++i){
        kek.push_back(*(dek.rbegin()+take));
        ++take;
    }
    if(dek == kek)
        return true;
    else
        return false;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}