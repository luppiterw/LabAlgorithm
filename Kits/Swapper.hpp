//
// Created by Hughie on 2018/11/25.
// Swap kit
//

#ifndef LABALGORITHM_SWAPPER_HPP
#define LABALGORITHM_SWAPPER_HPP

void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

#endif //LABALGORITHM_SWAPPER_HPP
