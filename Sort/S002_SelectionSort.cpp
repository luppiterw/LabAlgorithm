//
// Created by Hughie on 2018/11/25.
//

#include <iostream>
#include "S002_SelectionSort.h"
#include "Swapper.hpp"

/**
 *
 * */
void S002_SelectionSort::sort(int dataArr[], const int arrSize) {
    std::cout<<"S002_SelectionSort::sort arrSize="<<arrSize<<std::endl;

    int minIndex = 0;
    for(int i = 0; i < arrSize - 1; i++) {
        minIndex = i;
        for(int j = i + 1; j < arrSize; j++) {
            if(dataArr[j] < dataArr[minIndex]) {
                minIndex = j;
            }
        }
        ///< swap��������Ϊ���ã��˴����������ͬ����ָ��Ķ���һ�£��ᵼ������ֵΪ0
        ///< ��ʹ�ú�������ֱ��ʹ��ֵ����
        if(i != minIndex)
            Swapper::swap(dataArr[i], dataArr[minIndex]);
    }
    std::cout<<"S002_SelectionSort::sort end arrSize="<<arrSize<<std::endl;

}

