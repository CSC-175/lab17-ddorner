// Definition of findHigh function goes here
#include <string>

template <typename A, typename B, typename C, typename D>
void findHigh(A Data[], B size,C & index, D & High) {
    for(int i = 0; i < size; i++){
    if(Data[i] > High) {
        High = Data[i];
        index = i;
    }

    }
}