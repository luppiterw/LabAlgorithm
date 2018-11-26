//
// Created by Hughie on 2018/11/26.
//

#ifndef LABALGORITHM_TEXTUTILS_HPP
#define LABALGORITHM_TEXTUTILS_HPP

#include <string>

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
};

#endif //LABALGORITHM_TEXTUTILS_HPP
