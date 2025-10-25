

#include <iostream>

int main()
{
       //Алгоритм распоковки наткрального числа 
    // 123 -> 1 2 3
    /*int x = 123;
    std::cout << x % 10 << std::endl;
    std::cout << x / 10 << std::endl;
    std::cout << (x / 10) % 10 << std::endl;*/

    //int min_d = 9;
    //int max_d = 0;

    //int mult = 1;
    //int sum = 0;
    //int x;

    //std::cin >> x;
    //while (x > 0) {

    //    int d = x % 10; // 3

    //    sum += d;
    //    mult *= d;

    //    min_d = std::min(min_d, d);
    //    max_d = std::max(max_d,d)

        /*if (min_d > d) {
            min_d = d;
        }
        if (max_d < d) {
            max_d = d;
        }*/


        /*x /= 10;*/ // 12 1 0
    /*}
    std::cout << "S = " << sum << std::endl;
    std::cout << "m = " << mult << std::endl;
    std::cout << "Min = " << min_d << std::endl;
    std::cout << "Max = " << max_d << std::endl;*/

    // Найти наиболее часто встр. цыфра

    /*int x;
    std::cin >> x;

    int famous_num = 0;
    int max_cnt = 0;
    for (int d = 0; d < 10; ++d) {

        std::cout << "d = " << d << std::endl;

        int cnt = 0;
        int tmp = x; 

        while (tmp != 0) {

            std::cout << "x = " << tmp << std::endl;
        
            int digit = tmp % 10;
            if (digit == d) {
                ++cnt;
            }
            tmp /= 10;
        } 

        std::cout << "cnt = " << cnt << std::endl;
        std::cout << "max_cnt = " << max_cnt << std::endl;

        if (max_cnt < cnt) {
            max_cnt = cnt;
            famous_num = d;
        }
    }
    std::cout << famous_num << std::endl;*/

    //МАСИВЫ

    /*const int nmax = 5;

    int x[nmax];
    x[0] = -7;
    x[1] = 13;
    x[2] = 2;
    x[3] = -5;
    x[4] = 10;

    for (int i = 0; i < nmax-1; ++i) {
        for (int j = i + 1; j < nmax; ++j) {
            if (x[i] < x[j]) {
                std::swap(x[i], x[j]);
            }
        }
    }
     
    for (int i = 0; i < 5; ++i) {
        std::cout << "x" << i << " = " << x[i] << std::endl;
    }
    
    int arr[4];*/

    //2-УХ МЕРНЫЙ МАСИВ

    /*const int stolbec = 3;
    const int ctrochka = 3;

    int matrix[ctrochka][stolbec] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };*/

    /*std::cout << matrix[1][0] << std::endl;*/

    /*for (int i = 0; i < stolbec; ++i) {
        for (int j = 0; j < ctrochka; ++j) {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }*/

}

