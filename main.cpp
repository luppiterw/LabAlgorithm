#include <iostream>
//# pragma warning (disable:4819)
#include "SortTester.hpp"
using namespace std;

//extern void testExtern();

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

    SortTester().Test();

//    testExtern();
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