//
// Created by Hughie on 2018/11/26.
// 1959年Shell发明，第一个突破O(n2)的排序算法，是简单插入排序的改进版。
// 它与插入排序的不同之处在于，它会优先比较距离较远的元素。
// 希尔排序又叫缩小增量排序（Diminishing Increment Sort）。
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
