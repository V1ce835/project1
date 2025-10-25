
#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    const int len_m = 10; // Длина масива, на лекции говорили и показывали, что длину массива нельзя вводить с клавиатуры, она как константа, ну почти
    
    int masiv[len_m];
    
    std::cout << "Введите числа последовательности, ско-ко можно ввести чисел " << len_m << std::endl;

    for (int i = 0; i < len_m; ++i) {

        std::cin >> masiv[i]; // Вводим числа
        std::cout << "x" << i << " = " << masiv[i] << std::endl;

    }

    // Пункт 1
    int Sum = 0;
    int cnt = 0;

    for (int i = 0; i < len_m; ++i) {
        int d = masiv[i];
        if (d < 0) { 
            Sum += d; // Находим сумму отриц. чисел
            ++cnt;
        }
    }
    
    for (int i = 0; i < len_m-1; ++i) {
        for (int j = i + 1; j < len_m; ++j) {
            if (masiv[i] < masiv[j]) {
                std::swap(masiv[i], masiv[j]);
            }
        }
    }

    int max_num = masiv[0];

    int cnt_max_num =0; // Счетчик повторения самого большого числа последовательности
    for (int i = 0; i < len_m; ++i) {
        if (masiv[i] == max_num) {
            ++cnt_max_num;
        }
    }
    
    if ((cnt == 0) || (cnt_max_num == 1)) {
        std::cout << "Эта последовательность не подходит по условию" << std::endl;
    }
    else {
        std::cout << "Сумма отриц. чисел послед-сти = " << Sum << std::endl;
        std::cout << "Максимальное число последовательности = " << max_num << std::endl;
        std::cout << max_num << " повторяется " << cnt_max_num << " (раз или раза)" << std::endl;
    }

    // 2 пункт

    /*int x;
    std::cout << "Введите число x: ";
    std::cin >> x;

    int max_n = 0;

    if (0 <= x < 1000) {
        while (x > 0) {
            int d = x % 10;
            if (max_n < d) {
                max_n = d;
            }
            x /= 10;
        }
    }

    std::cout << "Наибольшая цыфра числа = " << max_n << std::endl;*/

    
}

