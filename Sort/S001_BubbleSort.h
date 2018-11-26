//
// Created by Hughie on 2018/11/25.
// bubble sort（冒泡排序）
// 冒泡排序是一种简单的排序算法。
// 它重复地走访过要排序的数列，一次比较两个元素，如果它们的顺序错误就把它们交换过来。
// 走访数列的工作是重复地进行直到没有再需要交换，也就是说该数列已经排序完成。
// 这个算法的名字由来是因为越小的元素会经由交换慢慢“浮”到数列的顶端。
//

#ifndef LABALGORITHM_S001_BUBBLE_SORT_H
#define LABALGORITHM_S001_BUBBLE_SORT_H


#include <iostream>
#include <vector>
#include "ISorter.h"

class S001_BubbleSort : public ISorter{
public:
    void sort(int dataArr[], int arrSize) override;

private:
    void func1(int dataArr[], int arrSize);
    void func2(int dataArr[], int arrSize);

//    virtual sort(int dataArray[]);
};


#endif //LABALGORITHM_S001_BUBBLE_SORT_H
