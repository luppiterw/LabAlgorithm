//
// Created by Hughie on 2018/11/25.
//
#define MODULE "S001_BubbleSort"

#include "S001_BubbleSort.h"
#include "Swapper.hpp"
#include "TextUtils.hpp"

#include <iostream>
#include <string>
//void swap(int &a, int& b) {
//    a = a + b;
//    b = a - b;
//    a = a - b;
//}
/**
 * ��0������ֵ��ʼ��������֮�������е�ֵ�ȶԣ�ǰ�ߴ��ں����򽻻���һ���������Խ���Сֵ����0����λ��
 * �ٴ�1��2��3������������ѭ������
 * */
void S001_BubbleSort::func1(int dataArr[], const int arrSize) {
    int counter = 0;
    std::string tmpStr;
    for(int i = 0; i < arrSize; i++) {
        for(int j = i + 1; j < arrSize; j++) {
            if(dataArr[i] > dataArr[j]) {
//                swap(dataArr[i], dataArr[j]);
                Swapper::swap(dataArr[i], dataArr[j]);

                TextUtils::arrayToString(dataArr, arrSize, tmpStr);
                std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
            }
        }
    }
}

/**
 * ��func1��Ѱ��С�෴�������ҵ���������������ֵ��Ȼ������Ѱ��ʣ����������������ֵ��ֱ������
 * */
void S001_BubbleSort::func2(int dataArr[], const int arrSize) {
    int counter = 0;
    std::string tmpStr;
    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - 1 - i; j++) {
            if (dataArr[j] > dataArr[j+1]) {
                int temp = dataArr[j+1];
                dataArr[j+1] = dataArr[j];
                dataArr[j] = temp;

                TextUtils::arrayToString(dataArr, arrSize, tmpStr);
                std::cout<<"func2:"<<(++counter)<<":"<<tmpStr<<std::endl;
            }
        }
    }
}

void S001_BubbleSort::sort(int dataArr[], const int arrSize) {
    std::cout<<MODULE<<".sort() sizeof(dataArr)="<< sizeof(dataArr)<<std::endl; /// 4 => pointer-size
    std::cout<<MODULE<<".sort() sizeof(int)="<< sizeof(int)<<std::endl; /// 4 = > int-size
//    std::cout<<MODULE<<".sort() end(dataArr)="<<std::end(dataArr)<<std::endl;   /// error

    func1(dataArr, arrSize);
//    func2(dataArr, arrSize);


    std::cout<<MODULE<<".sort() arrSize="<<arrSize<<std::endl;

}


//void testExtern() {
//    std::cout<<"TextUtils => testExtern called"<<std::endl;
//};