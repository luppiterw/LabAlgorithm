//
// Created by Hughie on 2018/11/25.
// bubble sort（冒泡排序）
//

#ifndef LABALGORITHM_S001_BUBBLE_SORT_H
#define LABALGORITHM_S001_BUBBLE_SORT_H


#include <iostream>
#include <vector>
#include "ISorter.h"

class S001_BubbleSort : public ISorter{
public:
    void sort(int dataArr[], const int arrSize) override;
//    virtual sort(int dataArray[]);
};


#endif //LABALGORITHM_S001_BUBBLE_SORT_H
