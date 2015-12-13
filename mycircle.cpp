#include <iostream>
#include "mycircle.h"


Circle::Circle(float r, string c){
    radius =r, color =c;}

float Circle::getRadius () {
    return radius;}

float Circle::getArea () {
    return (22/7 * radius * radius); }

string Circle :: getColor () {
    return color ;}
