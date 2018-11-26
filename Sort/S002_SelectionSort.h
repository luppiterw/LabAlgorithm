//
// Created by Hughie on 2018/11/25.
// Selection Sort 选择排序
// 一种简单直观的排序算法。
// 它的工作原理：首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
// 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
// 以此类推，直到所有元素均排序完毕。
//

#ifndef LABALGORITHM_S002_SELECTIONSORT_H
#define LABALGORITHM_S002_SELECTIONSORT_H


#include "ISorter.h"

class S002_SelectionSort : public ISorter {
public:
    void sort(int *dataArr, int arrSize) override;
};


#endif //LABALGORITHM_S002_SELECTIONSORT_H
