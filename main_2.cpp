//PALINDROME USING STACKS AND QUEUES
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

bool is_palindrome(std::string& s)
{
    std::queue<char> qu;
    std::stack<char> st;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(auto &a: s){
        if(std::isupper(a)){
            qu.push(a);
            st.push(a);
        }
    }
    while(!qu.empty()){
        if(qu.front() != st.top())
            return false;
        qu.pop();
        st.pop();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings;
    std::string temp;
    std::cout << "Enter the word: ";
    std::cin >> temp;
    test_strings.push_back(temp);
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}