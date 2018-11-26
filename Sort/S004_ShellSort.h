//
// Created by Hughie on 2018/11/26.
// 1959��Shell��������һ��ͻ��O(n2)�������㷨���Ǽ򵥲�������ĸĽ��档
// �����������Ĳ�֮ͬ�����ڣ��������ȱȽϾ����Զ��Ԫ�ء�
// ϣ�������ֽ���С��������Diminishing Increment Sort����
//

#ifndef LABALGORITHM_S004_SHELLSORT_H
#define LABALGORITHM_S004_SHELLSORT_H


#include "ISorter.h"

class S004_ShellSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:
    void fun1_swap(int *dataArr, int arrSize);
    void fun2(int *dataArr, int arrSize);
    void fun3(int *dataArr, int arrSize);
};


#endif //LABALGORITHM_S004_SHELLSORT_H
