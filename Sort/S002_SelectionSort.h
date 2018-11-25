//
// Created by Hughie on 2018/11/25.
//

#ifndef LABALGORITHM_S002_SELECTIONSORT_H
#define LABALGORITHM_S002_SELECTIONSORT_H


#include "ISorter.h"

class S002_SelectionSort : public ISorter {
public:
    void sort(int *dataArr, int arrSize) override;
};


#endif //LABALGORITHM_S002_SELECTIONSORT_H
