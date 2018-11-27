//
// Created by Hughie on 2018/11/27.
//

#include "S006_QuickSort.h"
#include "TextUtils.hpp"
#include "Swapper.hpp"

void S006_QuickSort::sort(int *dataArr, int arrSize) {
    counter = 0;
//    func1(dataArr, arrSize);
    func2(dataArr, arrSize);

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

/**
 * 左右指针法
 * */
void S006_QuickSort::func2(int *dataArr, int arrSize) {
    ///< 以左索引作为中心参考值
    func2_sort(dataArr, 0, 0, arrSize - 1);
}
/**
 * 左右指针法 https://blog.csdn.net/qq_36528114/article/details/78667034
 * 选取一个关键字(key)作为枢轴，一般取整组记录的第一个数/最后一个，这里采用选取序列最后一个数为枢轴。
 * 设置两个变量left = 0;right = N - 1
 * 从left一直向后走，直到找到一个大于key的值，right从后至前，直至找到一个小于key的值，然后交换这两个数。
 * 重复第三步，一直往后找，直到left和right相遇，这时将key放置left的位置即可。
 * */
void S006_QuickSort::func2_sort(int *dataArr, int pivotIndex, int start, int end) {
    if(start >= end) return;

    int leftIndex = start;
    int rightIndex = end;
    static int counter = 0;
    const int pivotData = dataArr[start];
    while(leftIndex < rightIndex) {
        ///< 右指针值大于参考值，则一直左移
        while(leftIndex < rightIndex && dataArr[rightIndex] >= pivotData){
            -- rightIndex;
        }
        dataArr[leftIndex] = dataArr[rightIndex];

        ///< 左指针值小于参考值，则一直右移
        while(leftIndex < rightIndex && dataArr[leftIndex] <= pivotData) {
            ++ leftIndex;
        }
        dataArr[rightIndex] = dataArr[leftIndex];

        ///< 交换左右指针值


//        Swapper::swap(dataArr[leftIndex], dataArr[rightIndex]);
    }
    dataArr[leftIndex] = pivotData;
    ///< 此时左右指针指向同一位置
//    Swapper::swap(dataArr[leftIndex], dataArr[pivotIndex]);
    ///< 递归完成左、右部分，此时参考点索引为leftIndex
    func2_sort(dataArr, start, start, leftIndex - 1);
    func2_sort(dataArr, leftIndex + 1, leftIndex + 1, end);
}

