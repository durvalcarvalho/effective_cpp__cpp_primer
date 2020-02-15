#include <iostream>

using namespace std;

class Widget {
public:
    Widget(){};                                // construtor padrão
    
    Widget(const Widget& rhs){};               // construtor por cópia
    
    Widget& operator=(const Widget& rhs){      // construtor de atribuição
        return *this;
    };    
};

int main() {

    Widget w1;
    Widget w2(w1);

    Widget w3 = w2;

    return 0;
}