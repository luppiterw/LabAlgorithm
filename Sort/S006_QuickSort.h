//
// Created by Hughie on 2018/11/27.
// ��������Ļ���˼�룺ͨ��һ�����򽫴��ż�¼�ָ��ɶ����������֣�
// ����һ���ּ�¼�Ĺؼ��־�����һ���ֵĹؼ���С��
// ��ɷֱ���������ּ�¼�������������Դﵽ������������
//
// ��������ʹ�÷��η�����һ������list����Ϊ�����Ӵ���sub-lists���������㷨�������£�
// ������������һ��Ԫ�أ���Ϊ ����׼����pivot����
// �����������У�����Ԫ�رȻ�׼ֵС�İڷ��ڻ�׼ǰ�棬����Ԫ�رȻ�׼ֵ��İ��ڻ�׼�ĺ��棨��ͬ�������Ե���һ�ߣ���
// ����������˳�֮�󣬸û�׼�ʹ������е��м�λ�á������Ϊ������partition��������
// �ݹ�أ�recursive����С�ڻ�׼ֵԪ�ص������кʹ��ڻ�׼ֵԪ�ص�����������
//

#ifndef LABALGORITHM_S006_QUICKSORT_H
#define LABALGORITHM_S006_QUICKSORT_H


#include "ISorter.h"

class S006_QuickSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:
    void func1(int *dataArr, int arrSize);
    void func1_sort(int *dataArr, int pivotAnchorIndex, int startIndex, int endIndex, int arrSize);
    int counter;

    ///< ����ָ�뷨
    void func2(int *dataArr, int arrSize);
    void func2_sort(int *dataArr, int leftIndex, int rightIndex);
    void func2_sort_2(int *dataArr, int pivotIndex, int leftIndex, int rightIndex);
    void QuickSort(int* array,int left,int right);
    int PartSort(int* array,int left,int right);
};


#endif //LABALGORITHM_S006_QUICKSORT_H
