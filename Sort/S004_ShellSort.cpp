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
 * ����㷨��ֱ��ʹ��gap-�����Ϊ��������Ʃ�� 3,2,45,56,6,8,9,11,90,29
 * ��Ϊgap = 10/2���Ҳ�ȥ������ֵ���㷨��Σ�������Ӧ����0��5����������0��ֵΪ3������5��ֵΪ8
 * ��ʵ���ϣ�gap������Ϊ������������ϰ�ߣ����Ǳ���income gap�����ֿ�����Ϊ������˼��⣩��
 * ���ڴ˴����������壨����ϰ�ߣ����ʶ��˷�����ʹ��distance
 *
 * �ȽϺõ�ͼ��˵�� https://www.cnblogs.com/chengxiao/p/6104371.html
 *
 * �����ķ�ʽ
 * */
void S004_ShellSort::fun1_swap(int *dataArr, int arrSize) {
    for(int distance = arrSize / 2; distance > 0; distance /= 2) {
        for(int i = distance; i < arrSize; i ++) {
            ///< ��ԭ���Ĳ��벽��ʼ��Ϊ1��ͬ���˴�ÿ����Ҫ��֮ǰdistance��ֵ�Ƚ�
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
 * ��������󣬿��ܺ�����ϸ���йأ��ݲ�����
 * https://www.cnblogs.com/onepixel/articles/7674659.html
 * �Ƚ�����������ļ�¼���зָ��Ϊ���������зֱ����ֱ�Ӳ������򣬾����㷨������
 * ѡ��һ����������t1��t2������tk������ti>tj��tk=1��
 * ���������и���k�������н���k ������
 * ÿ�����򣬸��ݶ�Ӧ������ti�����������зָ�����ɳ���Ϊm �������У�
 * �ֱ�Ը��ӱ����ֱ�Ӳ������򡣽���������Ϊ1 ʱ������������Ϊһ�������������ȼ�Ϊ�������еĳ��ȡ�
 * �ƶ�����
 * */
void S004_ShellSort::fun2(int *dataArr, int arrSize) {
    int len = arrSize,
            temp,
            gap = 1;
    while (gap < len / 3) {          // ��̬����������
        gap = gap * 3 + 1;
    }
    ///< Դ����Ϊjavascript���ԣ�ʹ��Math.floor��<=��ǰֵ�������������ǰֵΪ����ʱ����ԭֵ��
    ///< c++��ֱ��ʹ��intֵ/3���ص��Ծ���intֵ
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
 * ���´���ο��ٿ���JavaScript����ʵ��
 * https://baike.baidu.com/item/%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F/3229428?fr=aladdin
 * ��������
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
