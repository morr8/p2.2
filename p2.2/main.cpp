/*
 ••• P2.2
 In this project, you will perform calculations with triangles. A triangle is defined by the x- and y-coordinates of its three corner points.
 
 Your job is to compute the following properties of a given triangle:
 
 •the lengths of all sides
 •the angles at all corners
 •the perimeter
 •the area
 Supply a program that prompts a user for the corner point coordinates and produces a nicely formatted table of the triangle properties.
 */
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    float x1, y1;
    float x2, y2;
    float x3, y3;
    
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    cout << "Enter x3: ";
    cin >> x3;
    cout << "Enter y3: ";
    cin >> y3;
    cout << endl;
    
    
    float side_a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float side_b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    float side_c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    /*
    cout << "The length of side a: coordinate 1 to coordinate 2 = " << fixed << setprecision(1) << side_a << endl;
    cout << "The length of side b: coordinate 2 to coordinate 3 = " << fixed << setprecision(1) << side_b << endl;
    cout << "The length of side c: coordinate 3 to coordinate 1 = " << fixed << setprecision(1) << side_c << endl;
    */
    
    float angle_A = acos((pow(side_c, 2) + pow(side_b, 2) - pow(side_a, 2)) / (2 * side_b * side_c)) * (180 / M_PI);
    float angle_B = acos((pow(side_a, 2) + pow(side_c, 2) - pow(side_b, 2)) / (2 * side_a * side_c)) * (180 / M_PI);
    float angle_C = acos((pow(side_a, 2) + pow(side_b, 2) - pow(side_c, 2)) / (2 * side_a * side_b)) * (180 / M_PI);
    
    float perimeter = side_a + side_b + side_c;
    
    float s = (side_a + side_b + side_c) / 2;
    
    float area = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));
    
    /*
    cout << "Angle A = " << angle_A << endl;
    cout << "Angle B = " << angle_B << endl;
    cout << "Angle C = " << angle_C << endl << endl;
    cout << "The perimeter = " << perimeter << endl;
    cout << "The area = " << area << endl;
    */

    //cout << acos((pow(8, 2) + pow(6, 2) - pow(7, 2)) / (2 * 8 * 6)) * (180 / M_PI) << endl;
    
    cout << "Lengths        Angles  Perimeter   Area\nside a: " << fixed << setprecision(1) << side_a << "    " << angle_A << "    " << perimeter << "        " << area << "\nside b: " << side_b << "    " << angle_B<< "\nside c: " << side_c << "    " << angle_C << endl;
    
}
