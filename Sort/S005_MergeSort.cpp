//
// Created by Hughie on 2018/11/27.
// https://www.cnblogs.com/chengxiao/p/6194356.html
//

#include "S005_MergeSort.h"


void S005_MergeSort::sort(int *dataArr, int arrSize) {
    int *tmpDataArr = new int[arrSize]; /// 临时数组，用于临时存放结果值
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
 * @param data 待处理数据
 * @param start 待处理数据的子段起始索引
 * @param mid 待处理数据的子段中间索引
 * @param end 待处理数据的子段结尾索引
 * @param result 待处理数据的输出结果
 * */
void S005_MergeSort::func_2_merge(int *data, int start, int mid, int end, int *result) {
    int i, j, k;
    i = start; //左序列指针
    j = mid + 1;                        // 右序列指针 避免重复比较data[mid]
    k = 0; //临时数组指针
    while (i <= mid && j <= end) {        //数组data[start,mid]与数组(mid,end]均没有全部归入数组result中去
        if (data[i] <= data[j])         //如果data[i]小于等于data[j]
            result[k++] = data[i++];    //则将data[i]的值赋给result[k]，之后i,k各加一，表示后移一位
        else
            result[k++] = data[j++];    //否则，将data[j]的值赋给result[k]，j,k各加一
    }
    while (i <= mid)                    //表示数组data(mid,end]已经全部归入result数组中去了，而数组data[start,mid]还有剩余
        result[k++] = data[i++];        //将数组data[start,mid]剩下的值，逐一归入数组result
    while (j <= end)                    //表示数组data[start,mid]已经全部归入到result数组中去了，而数组(mid,high]还有剩余
        result[k++] = data[j++];        //将数组a[mid,high]剩下的值，逐一归入数组result

    for (i = 0; i < k; i++)             //将归并后的数组的值逐一赋给数组data[start,end]
        data[start + i] = result[i];    //注意，应从data[start+i]开始赋值
}
/**
 * 完全照抄百科中给定方法 https://baike.baidu.com/item/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F
 * 递归合并
 * */
void S005_MergeSort::func_2_merge_sort(int *data, int start, int end, int *result) {
    if (start < end) {
        int mid = start + (end-start) / 2;//避免溢出int
        func_2_merge_sort(data, start, mid, result);                    //对左边进行排序
        func_2_merge_sort(data, mid + 1, end, result);                  //对右边进行排序
        func_2_merge(data, start, mid, end, result);                    //把排序好的数据合并
    }
}