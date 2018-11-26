//
// Created by Hughie on 2018/11/25.
// Sort related test namespace
//

#ifndef LABALGORITHM_SORTTESTER_HPP
#define LABALGORITHM_SORTTESTER_HPP

#include "S001_BubbleSort.h"
#include "S002_SelectionSort.h"
#include "S003_InsertionSort.h"
#include "S004_ShellSort.h"

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
//        int testArray[5] = {123, 456, 78, 56, 43};
//        int testArray[10] = {123, 456, 78, 56, 43, 889, 787, 4567, 22, 4};
//        int testArray[10] = {123, 22, 78, 56, 43, 889, 787, 4567, 22, 4};
        int testArray[10] = {123, 1, 78, 56, 43, 889, 787, 4567, 22, 4};
//        int testArray[10] = {123, 3, 78, 56, 43, 889, 787, 4567, 22, 2};

        int arraySize = sizeof(testArray) / sizeof(int);
        const int sortType = 4;
//        S001_BubbleSort* pSorter = new S001_BubbleSort();
//        pSorter->sort(testArray5, 5);
        switch (sortType) {
            case 1: {
                ///< S001 Bubble Sort Ã°ÅÝÅÅÐò
                S001_BubbleSort s001 = S001_BubbleSort();
                s001.sort(testArray, arraySize);
                break;
            }
            case 2: {
                ///< S002 Selection Sort Ñ¡ÔñÅÅÐò
                S002_SelectionSort s002 = S002_SelectionSort();
                s002.sort(testArray, arraySize);
                break;
            }
            case 3: {
                ///< S003 Insertion Sort ²åÈëÅÅÐò
                S003_InsertionSort s003 = S003_InsertionSort();
                s003.sort(testArray, arraySize);
                break;
            }
            case 4: {
                ///< S004 Shell Sort Ï£¶ûÅÅÐò
                S004_ShellSort s004 = S004_ShellSort();
                s004.sort(testArray, arraySize);
            }

        }


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
