// lekcia1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "ohohohoh!\n";

    //ЦЕЛОЧИСЛЕННЫЕ

    char c1; // 1 байт , 256 значений -128...127
    unsigned c2; // 1 байт , 256 значений, 0...255

    short s1; // 2 байта, 2**16 значений, -32768...37767
    unsigned s2; // 2 байта, 2**16 значений, 0...65535

    int i1; // 4 байта , пиздец как много значений, -2**31 ... 2**31 - 1
    unsigned int i2; //4 байта , 4.147 млрд., 0...2**32

    long long ll1; // 8 байт
    unsigned long long ll2; // 8 байт


    i1 = 10.5;

    std::cout << i1 << "penis " << std::endl;

    // СИМВОЛЬНЫЕ

    char c3 = 'a';

    // ВЕШЕСТВЕННЫЕ

    float f = 3.123456f; // 4 byte, 6-7 значимых цифр

    double d = 3.24354353465654747; // 8 байт, 15-16 символов

    // ЛОГИЧЕСКИЙ ТИП ДАННЫХ 

    bool b = true; // false (0)
    bool b1 = 12345; // 1 byte  

    int x;

    std::cout << sizeof(b) << std::endl;

    std::cout << x << std::endl;

}
