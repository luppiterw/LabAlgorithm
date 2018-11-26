//
// Created by Hughie on 2018/11/26.
//

#include <TextUtils.hpp>
#include <iostream>
#include "S003_InsertionSort.h"

/**
 * 1������0Ԫ��Ĭ��Ϊ������
 * 2��������1Ԫ�ؿ�ʼ��curIndexΪ��ǰ��Ҫ�����������curDataΪ��ǰ����ʼʱ������Ӧ��ֵ
 * 3����curData��curIndex-1�����е�ֵ�Ƚϣ�С�ں����򽻻����о������е����������ˡ�����
 * (��ʵ�����ǲ���Ҫ�ģ���Ϊ������ֵ��ʼ����һ��ʼ����λ��������Ӧ��ֵ)
 * 4��ѭ������
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
//            ��ʵ�����ǲ���Ҫ�ģ���Ϊ������ֵ��ʼ����һ��ʼ����λ��������Ӧ��ֵ
//            dataArr[curIndex - 1] = curData;
            curIndex--;
//            ��ʵ�����ǲ���Ҫ�ģ���Ϊ������ֵ��ʼ����һ��ʼ����λ��������Ӧ��ֵ
//            curData = dataArr[curIndex];
        }
        ///< ������Ҫ�����λ��д��֮ǰ��Ӧ��¼��ֵ��������whileѭ����ȡ��ע�͵������У��˴�����Ҫ��
        dataArr[curIndex] = curData;
        TextUtils::arrayToString(dataArr, arrSize, tmpStr);
        std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
    }
}

/**
 * 1��Ĭ������0������
 * 2��currentΪ������1��ʼ��ֵ��preIndexΪ��ǰ���������ǰһ������
 * 3����dataArr[preIndex]ǰһ������ֵ�� current�ȶԣ�ǰ�ߴ��ں��ߣ�������preIndex��ֵ����preIndex+1����
 * ��������current���ֵ���κ��ƣ�
 * 4�����currentֵд�벻���ٴ����λ��
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





