//Автор: Бородиенко Денис ИВТ-23
#include <iostream>
#include <random>   // библиотека для генерации случайных чисел

// Функция создания массива заданного размера size, заполненного случайными значениями в порядке 
// возврастания в заданном интервале от min_val (по умолчанию 0) до max_val (по умолчанию 10)
template<typename T>
T* random_array_sorted(long long size, T min_val = 0.0, T max_val = 10.0) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(min_val, max_val);
    T* array = new T[size];
    array[0] = min_val + rand() % max_val;

    for (size_t i = 1; i < size; ++i) {
        array[i] = array[i - 1] + min_val + rand() % max_val;
    }

    return array;
}

//Функция поиска медианного значения целочисленного массива array, размера size size_t.
//Возвращает 
double Search_median(int* array, size_t size) {
    if (size > 2) {
        if (size % 2 == 0) {
            return (array[size / 2] + array[size / 2 - 1]) / 2.;
        }
        else {
            return array[size / 2];
        }
    }
    if (size == 2) {
        return (array[0] + array[1]) / 2.;
    }
    else {
        return (array[0]);
    }
}




int main()
{
    const int n = 2;
    int* array = random_array_sorted<int>(n, 0, 10);

    for (size_t i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    std::cout << Search_median(array, n);

}







//Лучший и среднйи случай - размер массиваа больше 2 элементов.
//Худший случай - размер массива меньше 2 или 1.