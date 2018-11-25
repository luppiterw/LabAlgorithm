#include <iostream>
#include <S001_BubbleSort.h>
//# pragma warning (disable:4819)
//#include "S001_BubbleSort.h"
using namespace std;

template <class T>
int getArraySize(T& arr) {
//    return sizeof(arr) / sizeof(arr[0]);
    return end(arr) - begin(arr);
}

int main() {
    cout << "Hello, World!" << endl;

//    S001_BubbleSort bubble = S001_BubbleSort();
//    bubble.print();
    const int maxLen = 20;
    int inputNumbers[maxLen] = {'\0'};
//    for(int i = 0; i < maxLen; i++) {
//        cin >> inputNumbers[i];
//        if(getchar() == '\n') break;
//    }

    int testArray5[5] = {123, 456, 78, 56, 43};
    int testArray10[10] = {123, 456, 78, 56, 43, 889, 787, 4567, 22, 4};

    S001_BubbleSort sorter = S001_BubbleSort();
    sorter.sort(testArray5, 5);
//    sorter.sort(testArray10, 10);
//    sorter.sort(inputNumbers, maxLen);


    for(int i = 0; i < 5; i++) {
        if(testArray5[i] != '\0')
            cout <<testArray5[i] << " ";
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
//    int inputValue;
//    do{
//        cout << "Input your numbers" << endl;
//        (cin >> inputValue).get();
//        cout << "   => " << inputValue << " char=" << char(inputValue) << endl;
//
//    } while (inputValue != '\n');

//    system("pause");
    return 0;
}