//
// Created by XiShao on 2020/6/9.
//

#ifndef FINAL_PRO_MATRIX_H
#define FINAL_PRO_MATRIX_H
#include <vector>
using  namespace std;

template <class T>
class Matrix{
private:
    int rowNumber;
    int columNumber;
    vector<vector<T>> mat;
public:
    int getRowNumber();
    int getColumNumber();


};


#endif //FINAL_PRO_MATRIX_H
