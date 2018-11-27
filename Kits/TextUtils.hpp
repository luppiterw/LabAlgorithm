//
// Created by Hughie on 2018/11/26.
//

#ifndef LABALGORITHM_TEXTUTILS_HPP
#define LABALGORITHM_TEXTUTILS_HPP

#include <string>
#include <iostream>

class TextUtils {
public:
    static void arrayToString(int dataArr[], int arrSize, std::string& result) {
//    char* tmpString = new char(arrSize);
        result.clear();
        for(int i = 0; i < arrSize; i++) {
            char tmpString[10] = {0};
            sprintf(tmpString, "%d ", dataArr[i]);
            result.append(tmpString);
        }
    }

//    static void arrayToString(int* dataArr, std::string& result) {
////    char* tmpString = new char(arrSize);
//        result.clear();
//        for(int i = 0; i < arrSize; i++) {
//            char tmpString[10] = {0};
//            sprintf(tmpString, "%d ", dataArr[i]);
//            result.append(tmpString);
//        }
//    }
//    error
//    static void testExtern() {
//        std::cout<<"TextUtils => static testExtern called"<<std::endl;
//    }
};

///error
//void testExtern() {
//    std::cout<<"TextUtils => testExtern called"<<std::endl;
//};

#endif //LABALGORITHM_TEXTUTILS_HPP
