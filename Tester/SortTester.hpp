//
// Created by Hughie on 2018/11/25.
// Sort related test namespace
//

#ifndef LABALGORITHM_SORTTESTER_HPP
#define LABALGORITHM_SORTTESTER_HPP

#include "S001_BubbleSort.h"
#include "S002_SelectionSort.h"

using namespace std;
//class S001_BubbleSort;
class SortTester {
public:
//    template <class T>
//    int getArraySize(T& arr) {
////    return sizeof(arr) / sizeof(arr[0]);
//        return end(arr) - begin(arr);
//    }

    void Test() {
        int testArray[5] = {123, 456, 78, 56, 43};
//        int testArray[10] = {123, 456, 78, 56, 43, 889, 787, 4567, 22, 4};
        int arraySize = sizeof(testArray) / sizeof(int);
//        S001_BubbleSort* pSorter = new S001_BubbleSort();
//        pSorter->sort(testArray5, 5);
        ///< S001 Bubble Sort ð������
//        S001_BubbleSort s001 = S001_BubbleSort();
//        s001.sort(testArray, arraySize);
        ///< S002 Selection Sort ѡ������
        S002_SelectionSort s002 = S002_SelectionSort();
        s002.sort(testArray, arraySize);

//    sorter.sort(testArray10, 10);
//    sorter.sort(inputNumbers, maxLen);


        for(int i = 0; i < arraySize; i++) {
            cout <<testArray[i] << " ";
//            if(testArray[i] != '\0')
//                cout <<testArray[i] << " ";
        }

//    for(int i = 0; i < 10; i++) {
//        if(testArray10[i] != '\0')
//            cout <<testArray5[i] << " ";
//    }
//    cout<<"---"<<getArraySize(inputNumbers)<<endl;

//    for(int i = 0; i < maxLen; i++) {
//        if(inputNumbers[i] != '\0')
//            cout <<inputNumbers[i] << " ";
//    }
        cout<<endl;
    }
};



#endif //LABALGORITHM_SORTTESTER_HPP