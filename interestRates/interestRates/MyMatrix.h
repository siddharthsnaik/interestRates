#pragma once
#ifndef _MY_MATRIX_H
#define _MY MATRIX_H

#include <vector>

template <typename Type = double> class MyMatrix
{
private:
	vector<vector<Type> > matrix;
public:
	MyMatrix(); //Default constructor
	MyMatrix(const int& numberOfRows, const int& numberOfColumns, const Type& defaultValue);
	MyMatrix(const MyMatrix<Type>& _rightHandSide); //Copy constructor
	MyMatrix<Type>& operator= (const MyMatrix<Type>& _rightHandSide); //Overloading the assignment operator
	virtual ~MyMatrix();
	vector<vector<Type> > getMatrix() const; //Accessing the values of the matrix directly via row and column indices
	Type& value(const int& rowNumber, const int& columnNumber);
};

#endif
