#include <iostream>
#include <domashak12_13.h>

//#define INPUT_METHOD console

static const int ARRAY_SIZE = 20;

void test9_C();
int* init9_C(int);
int* init9_C_with_input(int size);

int main() {
    std::cout<<"Hello, World!\n";

    test9_C();
    test9_C();
    test9_C();
    return 0;
}

void test9_C(){
    int* array =
#ifdef INPUT_METHOD
            init9_C(ARRAY_SIZE);
#else
            init9_C_with_input(ARRAY_SIZE);
#endif

    show_reverse9_C(array, ARRAY_SIZE);
};

int* init9_C(int size) {
    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        arr[i] = i+1;
    }

    return arr;
}

int* init9_C_with_input(int size) {
    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        std::cin>>arr[i];
    }

    return arr;
}
