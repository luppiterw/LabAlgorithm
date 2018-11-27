//
// Created by Hughie on 2018/11/27.
// https://www.cnblogs.com/chengxiao/p/6194356.html
//

#include "S005_MergeSort.h"


void S005_MergeSort::sort(int *dataArr, int arrSize) {
    int *tmpDataArr = new int[arrSize]; /// ��ʱ���飬������ʱ��Ž��ֵ
//    for(int i = 0; i < arrSize; i++) {
//        tmpDataArr[i] = dataArr[i];
//    }
    func_2_merge_sort(dataArr, 0, arrSize - 1, tmpDataArr);
    for(int i = 0; i < arrSize; i++) {
        dataArr[i] = tmpDataArr[i];
    }
    delete[] tmpDataArr;
}


/**
 * @param data ����������
 * @param start ���������ݵ��Ӷ���ʼ����
 * @param mid ���������ݵ��Ӷ��м�����
 * @param end ���������ݵ��Ӷν�β����
 * @param result ���������ݵ�������
 * */
void S005_MergeSort::func_2_merge(int *data, int start, int mid, int end, int *result) {
    int i, j, k;
    i = start; //������ָ��
    j = mid + 1;                        // ������ָ�� �����ظ��Ƚ�data[mid]
    k = 0; //��ʱ����ָ��
    while (i <= mid && j <= end) {        //����data[start,mid]������(mid,end]��û��ȫ����������result��ȥ
        if (data[i] <= data[j])         //���data[i]С�ڵ���data[j]
            result[k++] = data[i++];    //��data[i]��ֵ����result[k]��֮��i,k����һ����ʾ����һλ
        else
            result[k++] = data[j++];    //���򣬽�data[j]��ֵ����result[k]��j,k����һ
    }
    while (i <= mid)                    //��ʾ����data(mid,end]�Ѿ�ȫ������result������ȥ�ˣ�������data[start,mid]����ʣ��
        result[k++] = data[i++];        //������data[start,mid]ʣ�µ�ֵ����һ��������result
    while (j <= end)                    //��ʾ����data[start,mid]�Ѿ�ȫ�����뵽result������ȥ�ˣ�������(mid,high]����ʣ��
        result[k++] = data[j++];        //������a[mid,high]ʣ�µ�ֵ����һ��������result

    for (i = 0; i < k; i++)             //���鲢��������ֵ��һ��������data[start,end]
        data[start + i] = result[i];    //ע�⣬Ӧ��data[start+i]��ʼ��ֵ
}
/**
 * ��ȫ�ճ��ٿ��и������� https://baike.baidu.com/item/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F
 * �ݹ�ϲ�
 * */
void S005_MergeSort::func_2_merge_sort(int *data, int start, int end, int *result) {
    if (start < end) {
        int mid = start + (end-start) / 2;//�������int
        func_2_merge_sort(data, start, mid, result);                    //����߽�������
        func_2_merge_sort(data, mid + 1, end, result);                  //���ұ߽�������
        func_2_merge(data, start, mid, end, result);                    //������õ����ݺϲ�
    }
}