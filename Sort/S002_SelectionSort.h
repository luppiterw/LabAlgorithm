//
// Created by Hughie on 2018/11/25.
// Selection Sort ѡ������
// һ�ּ�ֱ�۵������㷨��
// ���Ĺ���ԭ��������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�
// Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��
// �Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�
//

#ifndef LABALGORITHM_S002_SELECTIONSORT_H
#define LABALGORITHM_S002_SELECTIONSORT_H


#include "ISorter.h"

class S002_SelectionSort : public ISorter {
public:
    void sort(int *dataArr, int arrSize) override;
};


#endif //LABALGORITHM_S002_SELECTIONSORT_H
