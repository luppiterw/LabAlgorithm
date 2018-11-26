//
// Created by Hughie on 2018/11/26.
// Insertion Sort 插入排序
// 插入排序的算法描述是一种简单直观的排序算法。
// 它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
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
