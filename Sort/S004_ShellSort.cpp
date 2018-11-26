//
// Created by Hughie on 2018/11/26.
//

#include "S004_ShellSort.h"

void S004_ShellSort::sort(int *dataArr, int arrSize) {
    fun1_swap(dataArr, arrSize);
//    fun2(dataArr, arrSize);
//    fun3(dataArr, arrSize);

}

/**
 * 许多算法中直接使用gap-间隔作为变量名，譬如 3,2,45,56,6,8,9,11,90,29
 * 认为gap = 10/2（且不去管增量值的算法如何），即对应索引0与5，其中索引0的值为3，索引5的值为8
 * 但实际上，gap的释义为间隔（个人理解习惯，但是比如income gap这种又可以作为差距的意思理解），
 * 用在此处容易有歧义（个人习惯），故而此方法中使用distance
 *
 * 比较好的图形说明 https://www.cnblogs.com/chengxiao/p/6104371.html
 *
 * 交换的方式
 * */
void S004_ShellSort::fun1_swap(int *dataArr, int arrSize) {
    for(int distance = arrSize / 2; distance > 0; distance /= 2) {
        for(int i = distance; i < arrSize; i ++) {
            ///< 与原来的插入步进始终为1不同，此处每次需要和之前distance的值比较
            for(int j = i - distance; j >= 0; j -= distance) {
                if(dataArr[j] <= dataArr[i]) continue;
                int tmp = dataArr[i];
                dataArr[i] = dataArr[j];
                dataArr[j] = tmp;
            }
        }
    }
}

/**
 * 本输出有误，可能和语言细节有关，暂不处理
 * https://www.cnblogs.com/onepixel/articles/7674659.html
 * 先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，具体算法描述：
 * 选择一个增量序列t1，t2，…，tk，其中ti>tj，tk=1；
 * 按增量序列个数k，对序列进行k 趟排序；
 * 每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，
 * 分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。
 * 移动方法
 * */
void S004_ShellSort::fun2(int *dataArr, int arrSize) {
    int len = arrSize,
            temp,
            gap = 1;
    while (gap < len / 3) {          // 动态定义间隔序列
        gap = gap * 3 + 1;
    }
    ///< 源代码为javascript语言，使用Math.floor求<=当前值的最近整数（当前值为整数时返回原值）
    ///< c++中直接使用int值/3返回的仍旧是int值
//    for (gap; gap > 0; gap = Math.floor(gap / 3)) {
    for (gap; gap > 0; gap = (gap / 3)) {
        for (int i = gap; i < len; i++) {
            temp = dataArr[i];

            int j = i-gap;
            for (; j > 0 && dataArr[j]> temp; j-=gap) {
                dataArr[j + gap] = dataArr[j];
            }
            dataArr[j + gap] = temp;
        }
    }
}

/**
 * 以下代码参考百科中JavaScript语言实现
 * https://baike.baidu.com/item/%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F/3229428?fr=aladdin
 * 交换方法
 * */
void S004_ShellSort::fun3(int *dataArr, int arrSize) {
    for (int fraction = (arrSize / 2); fraction > 0; fraction = (fraction / 2)) {
        for (int i = fraction; i < arrSize; i++) {
            for (int j = i - fraction; j >= 0 && dataArr[j] > dataArr[fraction + j]; j -= fraction) {
                int temp = dataArr[j];
                dataArr[j] = dataArr[fraction + j];
                dataArr[fraction + j] = temp;
            }
        }
    }
}
