//
// Created by Aaron Shabon on 2/14/22.
//
#pragma once
class Circle {
private:
    double radius;
    double pi = 3.14159; //double variables

public:
    Circle();
    Circle(double rad); //constructors

    double getRadius();
    double setRadius();
    double getArea(double radius);
    double getDiameter(double radius);
    double getCircumference(double radius);





};



