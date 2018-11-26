//
// Created by Hughie on 2018/11/26.
//

#include <TextUtils.hpp>
#include <iostream>
#include "S003_InsertionSort.h"

/**
 * 1、索引0元素默认为已排序
 * 2、从索引1元素开始，curIndex为当前需要处理的索引，curData为当前处理开始时索引对应的值
 * 3、将curData与curIndex-1索引中的值比较，小于后者则交换（感觉这里有点儿不像插入了……）
 * (其实交换是不必要的，因为交换的值，始终是一开始处理位置索引对应的值)
 * 4、循环结束
 * */
void S003_InsertionSort::func1(int *dataArr, int arrSize) {
    int curIndex, curData;
    int counter = 0;
    std::string tmpStr;

    for(int i = 1; i < arrSize; i++) {
        curIndex = i;
        curData = dataArr[curIndex];

        while(curIndex > 0 && curData < dataArr[curIndex - 1]) {
            dataArr[curIndex] = dataArr[curIndex - 1];
//            其实交换是不必要的，因为交换的值，始终是一开始处理位置索引对应的值
//            dataArr[curIndex - 1] = curData;
            curIndex--;
//            其实交换是不必要的，因为交换的值，始终是一开始处理位置索引对应的值
//            curData = dataArr[curIndex];
        }
        ///< 不再需要处理的位置写入之前对应记录的值（如上述while循环中取消注释掉的两行，此处则不需要）
        dataArr[curIndex] = curData;
        TextUtils::arrayToString(dataArr, arrSize, tmpStr);
        std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
    }
}

/**
 * 1、默认索引0已排序
 * 2、current为从索引1开始的值，preIndex为当前处理的索引前一个索引
 * 3、将dataArr[preIndex]前一个索引值与 current比对，前者大于后者，则将索引preIndex的值赋给preIndex+1索引
 * （即将比current大的值依次后移）
 * 4、最后将current值写入不需再处理的位置
 * */
void S003_InsertionSort::func2(int *dataArr, int arrSize) {
    int preIndex, current;
    int counter = 0;
    std::string tmpStr;
    for (int i = 1; i < arrSize; i++) {
        preIndex = i - 1;
        current = dataArr[i];
        while (preIndex >= 0 && dataArr[preIndex] > current) {
            dataArr[preIndex + 1] = dataArr[preIndex];
            preIndex--;
        }
        dataArr[preIndex + 1] = current;

        TextUtils::arrayToString(dataArr, arrSize, tmpStr);
        std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
    }
}

/**
 *
 * */
void S003_InsertionSort::sort(int *dataArr, int arrSize) {
    func1(dataArr, arrSize);
//    func2(dataArr, arrSize);
}





