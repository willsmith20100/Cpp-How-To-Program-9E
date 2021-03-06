/*
 * =====================================================================================
 *
 *       Filename:  ex_711.cpp
 *
 *    Description:  Exercise 7.11 - Bubble Sort
 *
 *        Version:  1.0
 *        Created:  21/04/16 17:14:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iostream>

const int limit = 10;

int main(int argc, const char *argv[]) {
    std::cout << "A program that uses bubble sort to sort an integer array"
              << std::endl;

    srand(time(0));

    int n[limit] = {};

    // randomise elements of n
    for (int i = 0; i < limit; ++i) {
        n[i] = rand() % 100;
    }

    std::cout << "Unsorted array n: " << std::endl;
    // print unsorted array
    for (int i = 0; i < limit; ++i) {
        std::cout << n[i] << std::endl;
    }

    // BUBBLE SORT
    for (int i = 0; i < limit - 1; ++i) {
        for (int j = 0; j < limit - 1; ++j) {
            if (n[j] > n[j + 1]) {
                int temp = n[j];

                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    std::cout << "\nSorted array n: " << std::endl;

    // print sorted array
    for (int i = 0; i < limit; ++i) {
        std::cout << n[i] << std::endl;
    }

    return 0;
}
