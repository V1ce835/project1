#include <iostream>
#include <limits>
#include <bitset>
int main() {
   /* const float PI = acos(-1);
    double r;
    double S;
    
    std::cin >> r;
    S = PI * r * r;*/

    //std::cout << S << std::endl;

    /*std::cout << INT_MAX << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;*/


    //БИТОВЫЙ СДВИГ
    //int x = 0b0011;
    //int y = (x << 1); // x*2**-1
    //std::cout << y << std::endl;

    //
    //// битовое &
    //int a = 0b0010;
    //int b = 0b1110;
    //// 0b0010

    //std::cout << (a & b) << std::endl;

    //int c = 11; // 0b1011 
    //std::cout << (c & 1) << std::endl; // 1 = 0b0001

    ////битовое |
    //int a1 = 0b0010;
    //int b1 = 0b1110;
    //// 0b1110

    //// битовоя инверсия
    //int d = 0b1010;
    //std::cout << ~d << std::endl; // 0b0101

    // битовый xor потом раберусь

    /*char lamp_status = 0b0000'0000;*/
    //0b00000010 чтобы включить 1 лампу
   

    /*std::cout << (lamp_status | (1 << 5));*/ // 0b00000001 = 1
    //0b00000010 = (1 << 1)
    //0b00000000 | 0b00000010
    /*int lamp_status = 0b00101010;
    int i = 3;
    std::cout << (lamp_status & ~(1 << i));*/
    // 0b00000001 = 1
    // 0b00001000 = (1 << i)
    // 0b11110111 = ~(1 << i)
    // 0b00101010



    /*int x = 11;
    bool isEven = -100;
    std::cout << isEven << std::endl;*/

    // ЛОГИЧЕСКИЕ ОПЕРАОРЫ: 
    // ==, !=, !, <, >, <= , >=.

    /*int a = 10;
    int b = 11;
    std::cout << (a == b) << std::endl;
    std::cout << ((a < b) && (b % 2 == 0)) << std::endl;*/

    // логическое И == &&
    // логическое ИЛИ == ||
    // логическое нет == !

    /*int x = 10;
    bool f = ((x == 10) || (x++));
    std::cout << x << std::endl;*/

    /*int x;
    std::cin >> x;

    bool isEven = (x % 2 == 0);

    

    if (isEven == true) {
        std::cout << "penis" << std::endl;
    }
    else if (x == 12){
        std::cout << "x == 12" << std::endl;
    }
    else {
        std::cout << "oraoraoraoraoraoraoraoraoraoraora" << std::endl;
    }*/
    
    /*int monthNumbers;
    std::cin >> monthNumbers;

    switch (monthNumbers) {
        case 1: std::cout << "1, клянись" << std::endl; break;
        case 2: std::cout << "2, клянись" << std::endl; break;

        default: std::cout << "suck" << std::endl; break;
    }*/


    //BITESET
    int x = 10;
    std::bitset<32> num(x);
    std::cout << num << std::endl;
}


