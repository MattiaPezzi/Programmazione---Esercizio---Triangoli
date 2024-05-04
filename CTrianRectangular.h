/*! \file CTrianRectangular.h
	\brief Declaration of the class TrianRectangular

	Details.
*/


#ifndef TrianRectangular_H
#define TrianRectangular_H

#include<iostream>

#include "CTriangular.h"

using namespace std;

/// @class TrianRectangular
/// @brief to manage an object with the shape of a TrianRectangular
class TrianRectangular : public Triangular
{
protected:

	float base;
	float height;
	
public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	TrianRectangular();
	TrianRectangular(float b, float h);
	TrianRectangular(const TrianRectangular &r);
	
	~TrianRectangular();
	/// @}
	
	/// @name OPERATORS
	/// @{
	TrianRectangular& operator=(const TrianRectangular &r); 
	bool operator==(const TrianRectangular &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const TrianRectangular &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetBase(float b);
	void SetHeight(float h);
	void SetDim(float b, float h);
	
	void GetDim(float &b, float &h);
	float GetBase();
	float GetHeight();

	float GetIpotenusa();	
	float GetPerimeter();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif