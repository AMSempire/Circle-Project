//
// Created by Aaron Shabon on 2/14/22.
//

#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(){
    radius = 0;
    pi = pi;
}
Circle::Circle(double rad) { //constructors
    radius = rad;
}

double Circle::getRadius(){ // accessor
    return radius;
}
double Circle::setRadius(){ //mutators
    cout << "Enter a new radius please." << endl;
    cin >> radius;
    return radius;
}
double Circle::getArea(double radius){
double area;
area = pi * radius * radius;
return area;
}
double Circle::getDiameter(double radius) {
    double diameter;
    diameter = radius * 2;
    return diameter;
}
double Circle::getCircumference(double radius){
    double circ;
    circ = 2 * pi * radius;
    return circ;
}
