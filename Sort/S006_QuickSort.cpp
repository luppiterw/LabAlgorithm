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
 * @param dataArr ��������
 * @param pivotAnchorIndex ��ǰѭ��pivot��׼ֵ��Ӧ���������̶���
 * @param startIndex ��ǰѭ����׼ֵ�������ʼ����
 * @param endIndex ��ǰѭ����׼ֵ�������ֹ����
 * */
void S006_QuickSort::func1_sort(int *dataArr, int pivotAnchorIndex, int startIndex, int endIndex, int arrSize) {
    int curPivotIndex = pivotAnchorIndex;
    const int pivotData = dataArr[pivotAnchorIndex];  ///< ��׼����ֵ
    std::string tmpStr;
//    if(startIndex <= pivotAnchorIndex && pivotAnchorIndex <= endIndex) {
//        ///< pivot������pivot�Ƚϣ�����pivotֵ����pivot����λ��
//        for(int i = startIndex; i < pivotAnchorIndex; i++) {
//            if(dataArr[i] > dataArr[curPivotIndex]) {
//                Swapper::swap(dataArr[i], dataArr[curPivotIndex]);
//                curPivotIndex = i; ///< ���»�׼ֵ����
//            }
//        }
//        ///< pivot������pivot�Ƚϣ�����pivotֵ����pivot����λ��
//
//    }

    for(int i = startIndex; i <= endIndex; i++) {
        ///< С��pivot����������ߣ��˴�Ϊ������
        if(dataArr[i] < dataArr[curPivotIndex]) {
            Swapper::swap(dataArr[i], dataArr[curPivotIndex]);
            curPivotIndex = i;
        }
        TextUtils::arrayToString(dataArr, arrSize, tmpStr);
        std::cout<<"func1:"<<(++counter)<<":"<<tmpStr<<std::endl;
    }
    Swapper::swap(dataArr[curPivotIndex], dataArr[pivotAnchorIndex]);

    ///< �ֱ𽫻�׼ֵ���ߵ����ݸ��Կ�������(�����ߵĳ�ʼλ����Ϊ��ʼ���ĵ�pivot��
    if(curPivotIndex > startIndex && curPivotIndex > 1)
        func1_sort(dataArr, startIndex, startIndex, curPivotIndex - 1, arrSize);
    if(curPivotIndex < endIndex && curPivotIndex + 1 < endIndex)
        func1_sort(dataArr, curPivotIndex + 1, curPivotIndex + 1, endIndex, arrSize);
}

/**
 * ѡ���׸�Ԫ����Ϊ��׼ֵ��pivot��
 * */
void S006_QuickSort::func1(int *dataArr, int arrSize) {
    func1_sort(dataArr, 0, 0, arrSize - 1, arrSize);
}

/**
 * ����ָ�뷨
 * */
void S006_QuickSort::func2(int *dataArr, int arrSize) {
    ///< ����������Ϊ���Ĳο�ֵ
    func2_sort(dataArr, 0, 0, arrSize - 1);
}
/**
 * ����ָ�뷨 https://blog.csdn.net/qq_36528114/article/details/78667034
 * ѡȡһ���ؼ���(key)��Ϊ���ᣬһ��ȡ�����¼�ĵ�һ����/���һ�����������ѡȡ�������һ����Ϊ���ᡣ
 * ������������left = 0;right = N - 1
 * ��leftһֱ����ߣ�ֱ���ҵ�һ������key��ֵ��right�Ӻ���ǰ��ֱ���ҵ�һ��С��key��ֵ��Ȼ�󽻻�����������
 * �ظ���������һֱ�����ң�ֱ��left��right��������ʱ��key����left��λ�ü��ɡ�
 * */
void S006_QuickSort::func2_sort(int *dataArr, int pivotIndex, int start, int end) {
    if(start >= end) return;

    int leftIndex = start;
    int rightIndex = end;
    static int counter = 0;
    const int pivotData = dataArr[start];
    while(leftIndex < rightIndex) {
        ///< ��ָ��ֵ���ڲο�ֵ����һֱ����
        while(leftIndex < rightIndex && dataArr[rightIndex] >= pivotData){
            -- rightIndex;
        }
        dataArr[leftIndex] = dataArr[rightIndex];

        ///< ��ָ��ֵС�ڲο�ֵ����һֱ����
        while(leftIndex < rightIndex && dataArr[leftIndex] <= pivotData) {
            ++ leftIndex;
        }
        dataArr[rightIndex] = dataArr[leftIndex];

        ///< ��������ָ��ֵ


//        Swapper::swap(dataArr[leftIndex], dataArr[rightIndex]);
    }
    dataArr[leftIndex] = pivotData;
    ///< ��ʱ����ָ��ָ��ͬһλ��
//    Swapper::swap(dataArr[leftIndex], dataArr[pivotIndex]);
    ///< �ݹ�������Ҳ��֣���ʱ�ο�������ΪleftIndex
    func2_sort(dataArr, start, start, leftIndex - 1);
    func2_sort(dataArr, leftIndex + 1, leftIndex + 1, end);
}

