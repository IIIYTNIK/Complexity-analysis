#pragma once
#include "calc.h"
#include <cassert>

//функция тестирования поичкаа медианного элемента
void test_median() {

    {//тест для чётного кол-ва эл-ов. берётся среднее от 2-ого и 3-его эл-та
        int array[] = { 0, 1, 2, 3 };
        assert(1.5 == Search_median(array, 4));
    }
    {//тест для 1 эл-та. Берётся сам эл-т
        int array[] = {0 };
        assert(0 == Search_median(array, 1));
    }
    {//тест для нечётного кол-ва эл-ов. Берётся центарльный эл-т
        int array[] = {1, 2, 3};
        assert(2 == Search_median(array, 3));
    }
    {//тест для большего кол-ва эл-ов. Берётся центральный.
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
        assert(5 == Search_median(array, 9));
    }
}