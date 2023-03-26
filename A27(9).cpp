#include <cstring>
#include <iostream>

class mystring {
    char str[100];
public:
    mystring(const char* s) {
        std::strcpy(str, s);
    }
    void print() const {
        std::cout << str << std::endl;
    }
    mystring operator!() const {
        mystring result(str);
        for (int i = 0; i < std::strlen(str); ++i) {
            if (std::isupper(str[i])) {
                result.str[i] = std::tolower(str[i]);
            } else if (std::islower(str[i])) {
                result.str[i] = std::toupper(str[i]);
            }
        }
        return result;
    }
};

int main() {
    mystring s("Hello, World!");
    s.print();          // Hello, World!
    mystring t = !s;
    t.print();          // hELLO, wORLD!
    return 0;
}
