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
    bool sparse;
public:
    //basic function
    int getRowNumber();
    int getColumNumber();

    //basic arithmetic reduction operations
    T getAllMax();
    T getAllAve();
    T getAllMin();
    T getAllSum();

    T getMaxByCol(int colNum);
    T getAveByCol(int colNum);
    T getMinByCol(int colNum);
    T getSumByCol(int colNum);

    T getMaxByRow(int rowNum);
    T getAveByRow(int rowNum);
    T getMinByRow(int rowNum);
    T getSumByRow(int rowNum);
};


#endif //FINAL_PRO_MATRIX_H
