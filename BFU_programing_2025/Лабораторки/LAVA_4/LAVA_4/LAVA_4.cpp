

#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    // 1 пункт
    const int len_m = 4; // по условии лабы
    int masiv[len_m+3];

    for (int i = 0; i < len_m + 3; ++i) {
        std::cin >> masiv[i];
        std::cout << "x" << i << " = " << masiv[i] << std::endl;
    }

    int cnt = 0;
    for (int i = 0; i < len_m + 3; ++i) {
        if (masiv[i] % 5 == 0) {
            ++cnt;
        }     
    }
   
    if (cnt == len_m + 3) {
        for (int i = 0; i < len_m+3; ++i) {
            for (int j = 0; j < len_m + 3; ++j) {
                if (masiv[i] > masiv[j]) {
                    std::swap(masiv[i], masiv[j]);
                }
            }
        }
    }
    else {
        std::cout << "Этот масив не подходит" << std::endl;
    }

    for (int i = 0; i < len_m + 3; ++i) {
        std::cout << masiv[i] << " ";
    }

    // 2 пункт
    const int n = 3;
    const int m = 4;

    int matrix[n][m];

    for (int st = 0; st < 3; ++st) {
        std::cout << "Строчка: " << st+1 << std::endl;
        for (int ct = 0; ct < 4; ++ct) {
            std::cin >> matrix[st][ct];
        }
        std::cout << std::endl;
    }

    // ????? хз что дальше

    int cnt[m];

    for (int j = 0; j < m; ++j) {
        cnt[j] = 0;
    }

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] < 0) {
                cnt[j] += 1;
            }
        }
    }

    int sum_cnt = 0;
    for (int j = 0; j < m; ++j) {
        sum_cnt = sum_cnt + cnt[j];
    }
    
    for (int j = 0; j < m; ++j) {
        if (sum_cnt == 0) {
            std::cout << "В этой матрице нету отриц. чисел" << std::endl;
            break;
        }
        else {
            std::cout << "Единиц в " << j + 1 << " столбце: " << cnt[j] << std::endl;
        }
        
    }

    int max_cnt = std::numeric_limits<int>::min();

    for (int j = 0; j < m; ++j) {
        if (cnt[j] > max_cnt) {
            max_cnt = cnt[j];
        }
    }

    

    for (int j = 0; j < m; ++j) {
        if (cnt[j] == max_cnt && sum_cnt != 0) {
            for (int i = 0; i < n; ++i) {
                matrix[i][j] = -1;
            }
        }
    }
    //Вывод матрицы
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

