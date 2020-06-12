//
// Created by XiShao on 2020/6/12.
//
#include "Matrix.h"
#include <iostream>
template <class T>
T Matrix<T>:: getAllMax(){
   if(this->sparse){

   }else {

           T mmax = this->mat[0][0];
           for (int i = 0; i < this->mat.size(); i++) {
               for (int j = 0; j < this->mat[i].size(); j++) {
                 if(mat[i][j]>mmax) mmax = mat[i][j];
               }
           }
       return mmax;
   }

}
template <class T>
T Matrix<T>:: getAllAve(){
    if(this->sparse){

    }else{
        return this->getAllSum()/(this->rowNumber*this->columNumber);
    }
}
template <class T>
T Matrix<T>:: getAllMin(){
    if(this->sparse){

    }else{
        T mmin = this->mat[0][0];
        for (int i = 0; i < this->mat.size(); i++) {
            for (int j = 0; j < this->mat[i].size(); j++) {
                if(mat[i][j]<mmin) mmin = mat[i][j];
            }
        }
        return mmin;
    }
}

template <class T>
T Matrix<T>:: getAllSum(){
    if(this->sparse){

    }else{
        T msum = this->mat[0][0];
        for (int i = 0; i < this->mat.size(); i++) {
            for (int j = 0; j < this->mat[i].size(); j++) {
               if(i==0 && j==0)continue;
               msum+=mat[i][j];
            }
        }
        return msum;
    }
}

template <class T>
T Matrix<T>:: getMaxByCol(int colNum){
    if(colNum<0 || colNum>this->columNumber){
        cerr << "Invalid column number"<<endl;
    }else if(this->sparse){

    }else{
        T mmax = this->mat[0][colNum];
        for (int i = 0; i < this->mat.size(); i++) {
            for (int j = 0; j < this->mat[i].size(); j++) {
                if(mat[i][j]>mmax && j == colNum)mmax =mat[i][j] ;

            }
        }
        return mmax;
    }
}
template <class T>
T Matrix<T>:: getAveByCol(int colNum){
    if(colNum<0 || colNum>this->columNumber){
        cerr << "Invalid column number"<<endl;
    }else if(this->sparse){

    }else{

    }
}
template <class T>
T Matrix<T>:: getMinByCol(int colNum){
    if(colNum<0 || colNum>this->columNumber){
        cerr << "Invalid column number"<<endl;
    }else if(this->sparse){

    }else{
        T mmin = this->mat[0][0];
        for (int i = 0; i < this->mat.size(); i++) {
            for (int j = 0; j < this->mat[i].size(); j++) {
                if(mat[i][j]<mmin && j =colNum ) mmin = mat[i][j];
            }
        }
        return mmin;
    }
}
template <class T>
T Matrix<T>:: getSumByCol(int colNum){
    if(colNum<0 || colNum>this->columNumber){
        cerr << "Invalid column number"<<endl;
    }else if(this->sparse){

    }else{
        T msum = this->mat[0][0];
        for (int i = 0; i < this->mat.size(); i++) {
            for (int j = 0; j < this->mat[i].size(); j++) {
                if(i==0 && j==0)continue;
               if(j==colNum) msum+=mat[i][j];
            }
        }
        return msum;
    }
}

template <class T>
T Matrix<T>:: getMaxByRow(int rowNum){
    if(rowNum<0 || rowNum>this->rowNumber){
        cerr << "Invalid row number"<<endl;
    }else if(this->sparse){

    }else{

    }
}
template <class T>
T Matrix<T>:: getAveByRow(int rowNum){
    if(rowNum<0 || rowNum>this->rowNumber){
        cerr << "Invalid row number"<<endl;
    }else if(this->sparse){

    }else{

    }
}
template <class T>
T Matrix<T>:: getMinByRow(int rowNum){
    if(rowNum<0 || rowNum>this->rowNumber){
        cerr << "Invalid row number"<<endl;
    }else if(this->sparse){

    }else{

    }
}
template <class T>
T Matrix<T>:: getSumByRow(int rowNum){
    if(rowNum<0 || rowNum>this->rowNumber){
        cerr << "Invalid row number"<<endl;
    }else if(this->sparse){

    }else{

    }
}