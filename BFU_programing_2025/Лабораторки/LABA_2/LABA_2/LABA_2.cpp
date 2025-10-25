#include <iostream>
#include <bitset>

int main()
{
    setlocale(LC_ALL, "Russian");

    short A;
    std::cout << "А: ";
    std::cin >> A;
    std::bitset<8>num(A);
    std::cout << A << " = " << num << std::endl;
    short i;
    std::cout << "Номер бита: ";
    std::cin >> i;
    if (std::cin.fail()  || i < 0 || i > 8) {
        std::cout << "Eror!" << std::endl;
    }
    else {
        int bit_value = (A >> i) & 1;
        std::cout << bit_value << std::endl; // надо было исправить вывод i -го бита
        if (bit_value != 0) {
            int B;
            int C;
            std::cout << "А: ";
            std::cout << A << std::endl;
            std::cout << "B: ";
            std::cin >> B;
            std::cout << "C: ";
            std::cin >> C;
            if ((A < B) && (B < C)) {
                std::cout << C - B - A << std::endl;
            }
            else if (A % C == 0) {
                std::cout << A / C + B << std::endl;
            }
            else {
                std::cout << A + B + C << std::endl;
            }
        }
        else {
            int res = A | A;
            std::cout << res << std::endl;
        }
    }
    int N;
    std::cout << "месяц: ";
    std::cin >> N;
    switch (N) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: std::cout << "31 день"; break;
    case 2: std::cout << "28 дней"; break;
    case 4: case 6: case 9: case 11: std::cout << "30 дней"; break;
    default: std::cout << "Такого месяца нету";
    }

}