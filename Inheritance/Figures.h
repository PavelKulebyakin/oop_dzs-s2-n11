#pragma once

#include <iostream>
#include <vector>

class Figure
{
protected:
	float Area;
	float Per;
};

class Quadrangle : public Figure
{
protected:
	float a, b, c, d;
	Quadrangle() { a = 0; b = 0; c = 0; d = 0; }
	~Quadrangle(){}

public:
	float GetA();
	float GetB();
	float GetC();
	float GetD();

	virtual float CalcArea() = 0;
	virtual float CalcPer() = 0;
};

class Rhombus : public Quadrangle
{
private:
	float d1, d2;
public:
	Rhombus(float d1, float d2) {
		this->d1 = d1; this->d2 = d2;
		a = sqrt(d1 * d1 + d2 * d2) / 2;
		b = a; c = a; d = a;
	}
	~Rhombus() {}

	void SetSide(float value) {
		a = value; b = value; c = value; d = value;
		d2 = sqrt(a * a - d1 * d1 / 4) * 2;
	}
	void SetD1(float value) {
		d1 = value;
		a = sqrt(d1 * d1 + d2 * d2) / 2;
		b = a; c = a; d = a;
	}
	void SetD2(float value) {
		d2 = value;
		a = sqrt(d1 * d1 + d2 * d2) / 2;
		b = a; c = a; d = a;
	}
	float CalcArea() override {
		return (d1 * d2) / 2;
	}
	float CalcPer() override {
		return this->a * 4;
	}
};

class Rectangle : public Quadrangle
{
	
public:
	Rectangle(float a = 0, float b = 0)
	{
		this->a = a;
		this->b = b;
		c = a, d = b;
	}
	~Rectangle(){}

	void SetA(float value) {
		a = value; c = value;
	}
	void SetB(float value) {
		b = value; d = value;
	}
	float CalcArea() override {
		return this->a * this->b;
	}
	float CalcPer() override {
		return (this->a + this->b) * 2;
	}

};