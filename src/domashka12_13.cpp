//
// Created by Юля on 27.12.2015.
//
#include <iostream>

void show_reverse9_C(int arr[20], int size) {
    std::cout<<"\n\n----------------------------TASK 9_C Started...----------------------------\n";
    for(int i = 0; i < size; i++) {
        std::cout<<" "<<arr[i];
    }
    std::cout<<"\n";
    for(int i = 1; i < 10; i+=2) {
        std::cout<<" "<<arr[i]<<" "<<arr[i+10];
    }
    std::cout<<"\n----------------------------TASK 9_C Finished with results----------------------------\n";
}