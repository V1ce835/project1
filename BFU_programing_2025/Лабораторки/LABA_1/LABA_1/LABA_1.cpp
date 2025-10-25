#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Формула нахожединя объёма сферы: ";
    std::cout << "V = 4 / 3 * П * r ^ 3\n";
    int r;
    const float P = 13.1415;
    float q = 4. / 3;
    std::cout << "Радиус: ";
    std::cin >> r;
    std::cout << "V = " << q * P * r * r * r << std::endl;

    std::cout << "Формула нахождения площади поверхности сферы: ";
    std::cout << "S = 4 * П * r^2\n";
    std::cout << "S = " << 4 * P * r * r << std::endl;

    std::cout << "int занимает " << sizeof(r) * 8 << " бит(а)\n";

    std::cout << "Макс значение: " << INT_MAX << std::endl;
    std::cout << "Мин значение: " << INT_MIN << std::endl;

    std::cout << "float занимает " << sizeof(P) * 8 << " бит(а)\n";

    std::cout << "Максимальное значение: " << FLT_MAX << std::endl;
    std::cout << "Минимальное значение: " << FLT_MIN << std::endl;
    return 0;

}
