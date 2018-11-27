//
// Created by Hughie on 2018/11/27.
// �鲢�����ǽ����ڹ鲢�����ϵ�һ����Ч�������㷨��
// ���㷨�ǲ��÷��η���Divide and Conquer����һ���ǳ����͵�Ӧ�á�
// ��������������кϲ����õ���ȫ��������У�
// ����ʹÿ��������������ʹ�����жμ�����
// �������������ϲ���һ���������Ϊ2-·�鲢��
//
// �鲢������һ���ȶ������򷽷���
// ��ѡ������һ�����鲢��������ܲ����������ݵ�Ӱ�죬�����ֱ�ѡ������õĶ࣬��Ϊʼ�ն���O(nlogn����ʱ�临�Ӷȡ�
// ��������Ҫ������ڴ�ռ�
//

#ifndef LABALGORITHM_S005_MERGESORT_H
#define LABALGORITHM_S005_MERGESORT_H


#include "ISorter.h"

class S005_MergeSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:


    void func_2_merge(int *dataArr, int start, int mid, int end, int *result);
    void func_2_merge_sort(int *data, int start, int end, int *result);
};


#endif //LABALGORITHM_S005_MERGESORT_H
