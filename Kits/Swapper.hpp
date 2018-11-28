//
// Created by Hughie on 2018/11/25.
// Swap kit
//

#ifndef LABALGORITHM_SWAPPER_HPP
#define LABALGORITHM_SWAPPER_HPP

class Swapper {
public:
    /// 注意：此处a、b不能指向同一对象，否则出错
    static void swap(int& a, int& b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }


    static void swap(int* a, int* b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }

    static void swap(int *arr, int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

//    static void swap(int arr[], int i, int j) {
//        int tmp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = tmp;
//    }
//    static Swapper* getInstance();
//private:
//    static Swapper instance;
//    Swapper() {
//
//    }
//
//    virtual ~Swapper(){
//
//    }
};

//Swapper* Swapper::getInstance() {
//    return &instance;
//}
#endif //LABALGORITHM_SWAPPER_HPP
