//
// Created by Hughie on 2018/11/26.
// Insertion Sort ��������
// ����������㷨������һ�ּ�ֱ�۵������㷨��
// ���Ĺ���ԭ����ͨ�������������У�����δ�������ݣ��������������дӺ���ǰɨ�裬�ҵ���Ӧλ�ò����롣
//

#ifndef LABALGORITHM_S003_INSERTIONSORT_H
#define LABALGORITHM_S003_INSERTIONSORT_H

#include "ISorter.h"

class S003_InsertionSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:
    void func1(int dataArr[], int arrSize);
    void func2(int dataArr[], int arrSize);
};

#endif //LABALGORITHM_S003_INSERTIONSORT_H
