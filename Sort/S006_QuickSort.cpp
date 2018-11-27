//
// Created by Hughie on 2018/11/27.
//

#include "S006_QuickSort.h"
#include "TextUtils.hpp"
#include "Swapper.hpp"

void S006_QuickSort::sort(int *dataArr, int arrSize) {
    counter = 0;
    func1(dataArr, arrSize);
}
/**
 * @param dataArr 所有数据
 * @param pivotAnchorIndex 当前循环pivot基准值对应的索引（固定）
 * @param startIndex 当前循环基准值处理的起始索引
 * @param endIndex 当前循环基准值处理的终止索引
 * */
void S006_QuickSort::func1_sort(int *dataArr, int pivotAnchorIndex, int startIndex, int endIndex, int arrSize) {
    int curPivotIndex = pivotAnchorIndex;
    const int pivotData = dataArr[pivotAnchorIndex];  ///< 基准参照值
    std::string tmpStr;
//    if(startIndex <= pivotAnchorIndex && pivotAnchorIndex <= endIndex) {
//        ///< pivot左侧的与pivot比较，大于pivot值则与pivot交换位置
//        for(int i = startIndex; i < pivotAnchorIndex; i++) {
//            if(dataArr[i] > dataArr[curPivotIndex]) {
//                Swapper::swap(dataArr[i], dataArr[curPivotIndex]);
//                curPivotIndex = i; ///< 更新基准值索引
//            }
//        }
//        ///< pivot左侧的与pivot比较，大于pivot值则与pivot交换位置
//
//    }

    for(int i = startIndex; i <= endIndex; i++) {
        ///< 小于pivot的移至其左边（此处为交换）
        if(dataArr[i] < dataArr[curPivotIndex]) {
            Swapper::swap(dataArr[i], dataArr[curPivotIndex]);
            curPivotIndex = i;
        }
        TextUtils::arrayToString(dataArr, arrSize, tmpStr);
        std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
    }
    Swapper::swap(dataArr[curPivotIndex], dataArr[pivotAnchorIndex]);

    ///< 分别将基准值两边的数据各自快速排序(将两边的初始位置作为起始中心点pivot）
    if(curPivotIndex > startIndex && curPivotIndex > 1)
        func1_sort(dataArr, startIndex, startIndex, curPivotIndex - 1, arrSize);
    if(curPivotIndex < endIndex && curPivotIndex + 1 < endIndex)
        func1_sort(dataArr, curPivotIndex + 1, curPivotIndex + 1, endIndex, arrSize);
}

/**
 * 选择首个元素作为基准值（pivot）
 * */
void S006_QuickSort::func1(int *dataArr, int arrSize) {
    func1_sort(dataArr, 0, 0, arrSize - 1, arrSize);
}

