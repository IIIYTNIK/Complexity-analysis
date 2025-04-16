#pragma once


//Функция поиска медианного значения целочисленного массива array, размера size size_t.
//Возвращает медианное значение массива
double Search_median(int* array, size_t size) {
    if (size > 2) { //если размер массива больше 2
        if (size % 2 == 0) {//проверка на чётность кол-ва эл-ов
            return (array[size / 2] + array[size / 2 - 1]) / 2.;
        }
        else {
            return array[size / 2];
        }
    }
    if (size == 2) {//если 2 эл-та
        return (array[0] + array[1]) / 2.;
    }
    else {//если 1 эл-т
        return (array[0]);
    }
}



// Функция создания массива заданного размера size, заполненного случайными значениями в порядке 
// возврастания в заданном интервале от min_val (по умолчанию 0) до max_val (по умолчанию 10)
template<typename T>
T* random_array_sorted(long long size, T min_val = 0.0, T max_val = 10.0) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(min_val, max_val);
    T* array = new T[size];
    array[0] = distr(gen);

    for (size_t i = 1; i < size; ++i) {
        array[i] = array[i - 1] + (distr(gen) - min_val);
    }

    return array;
}