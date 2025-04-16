#pragma once


//������� ������ ���������� �������� �������������� ������� array, ������� size size_t.
//���������� ��������� �������� �������
double Search_median(int* array, size_t size) {
    if (size > 2) { //���� ������ ������� ������ 2
        if (size % 2 == 0) {//�������� �� �������� ���-�� ��-��
            return (array[size / 2] + array[size / 2 - 1]) / 2.;
        }
        else {
            return array[size / 2];
        }
    }
    if (size == 2) {//���� 2 ��-��
        return (array[0] + array[1]) / 2.;
    }
    else {//���� 1 ��-�
        return (array[0]);
    }
}



// ������� �������� ������� ��������� ������� size, ������������ ���������� ���������� � ������� 
// ������������ � �������� ��������� �� min_val (�� ��������� 0) �� max_val (�� ��������� 10)
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