//Автор: Бородиенко Денис ИВТ-23
#include <iostream>
#include <random>   // библиотека для генерации случайных чисел
#include "test.h"



int main()
{
    test_median();
    const int n = 2;
    int* array = random_array_sorted<int>(n, 0, 10);

    for (size_t i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    std::cout << Search_median(array, n);

}



//Для данной задачи лучший, среднйи и худший случай равен O(1), т.к. сложность не изменяется от кол-ва эл-ов
//Алгоритм не имеет циклов и рекурсий. И состоит из 3-ёх блоков if-else