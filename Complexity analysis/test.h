#pragma once
#include "calc.h"
#include <cassert>

//������� ������������ ������� ���������� ��������
void test_median() {

    {//���� ��� ������� ���-�� ��-��. ������ ������� �� 2-��� � 3-��� ��-��
        int array[] = { 0, 1, 2, 3 };
        assert(1.5 == Search_median(array, 4));
    }
    {//���� ��� 1 ��-��. ������ ��� ��-�
        int array[] = {0 };
        assert(0 == Search_median(array, 1));
    }
    {//���� ��� ��������� ���-�� ��-��. ������ ����������� ��-�
        int array[] = {1, 2, 3};
        assert(2 == Search_median(array, 3));
    }
    {//���� ��� �������� ���-�� ��-��. ������ �����������.
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
        assert(5 == Search_median(array, 9));
    }
}