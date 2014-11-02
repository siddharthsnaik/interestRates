#pragma once
#ifndef _MY_MATRIX_CPP
#define _MY_MATRIX_CPP

#include "MyMatrix.h"
using namespace std;

//Default constructor
template <typename Type>
MyMatrix<Type>::MyMatrix()
{
}
//Constructor which obtains specifications of number of rows, number of columns and default values
template <typename Type>
MyMatrix<Type>::MyMatrix(const int& numberOfRows, const int& numberOfColumns, const Type& defaultValues)
{
	for (int counter = 0; counter < numberOfRows; counter++)
	{
		vector<Type> columnVector (numberOfColumns, defaultValues);
		matrix.push_back(columnVector);
	}
}
//Copy constructor
template <typename Type>
MyMatrix<Type>::MyMatrix(const MyMatrix<Type>& _rightHandSide)
{
	matrix = _rightHandSide.getMatrix();
}
//Overloaded assignment operator
MyMatrix<Type>& MyMatrix<Type>::operator= (const MyMatrix<Type>& _rightHandSide)
{
	if (this == &_righHandSide) return *this; //Handling an assignment to itself
	matrix = _rightHandSide.getMatrix();
	return *this;
}
//Destructor
template <typename Type> MyMatrix<Type>::~MyMatrix()
{
}
//Accessing matrix method, via copying
template <typename Type> MyMatrix<Type> MyMatrix<Type>::getMatrix() const
{
	return matrix;
}
//Accessing matrix method, via row and column index
template <typename Type> Type& MyMatrix<Type>::value(const int& rowNumber, const int& columnNumber)
{
	return matrix[rowNumber][columnNumber];
}
#endif