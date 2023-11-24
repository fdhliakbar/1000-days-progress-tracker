#include <bits/stdc++.h>

struct dataLogin{
    std::string password = "better call saul";
};

class ATM {
    public:
        int nim;
};


int main() {
    std::string testPassword;
    dataLogin data;

    std::cout << "===============================================" << '\n';
    std::cout << "=\tBank Management" << "\t\n";
    std::cout << "=\tMasukan testPassword : ";
    getline(std::cin, testPassword);

    if (testPassword == data.password)
        std::cout << "Login Successfully" << '\n';

    return 0;
}