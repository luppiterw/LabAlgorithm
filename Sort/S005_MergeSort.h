//
// Created by Hughie on 2018/11/27.
// 归并排序是建立在归并操作上的一种有效的排序算法。
// 该算法是采用分治法（Divide and Conquer）的一个非常典型的应用。
// 将已有序的子序列合并，得到完全有序的序列；
// 即先使每个子序列有序，再使子序列段间有序。
// 若将两个有序表合并成一个有序表，称为2-路归并。
//
// 归并排序是一种稳定的排序方法。
// 和选择排序一样，归并排序的性能不受输入数据的影响，但表现比选择排序好的多，因为始终都是O(nlogn）的时间复杂度。
// 代价是需要额外的内存空间
//

#ifndef LABALGORITHM_S005_MERGESORT_H
#define LABALGORITHM_S005_MERGESORT_H


#include "ISorter.h"

class S005_MergeSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:


    void func_2_merge(int *dataArr, int start, int mid, int end, int *result);
    void func_2_merge_sort(int *data, int start, int end, int *result);
};


#endif //LABALGORITHM_S005_MERGESORT_H
