/*! \file CIsoscele.h
	\brief Declaration of the class Isoscele

	Details.
*/


#ifndef ISOSCELE_H
#define ISOSCELE_H

#include<iostream>

#include "CTriangular.h"

using namespace std;

/// @class Isoscele
/// @brief to manage an object with the shape of a Isoscele
class Isoscele : public Triangular
{
protected:
	float height;
	float base;

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Isoscele();
	Isoscele(float b, float h);
	Isoscele(const Isoscele &r);
	
	~Isoscele();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Isoscele& operator=(const Isoscele &r); 
	bool operator==(const Isoscele &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Isoscele &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetHeight(float h);
	void SetBase(float b);
	void SetDim(float b, float h);
	
	void GetDim(float &b, float &h);
	float GetHeight();
	float GetBase(); 
	
	float GetPerimeter();
	float GetSide();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif