//
//  main.cpp
//  Book Exercise 3.3
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Algebra: solve 2 x 2 linear equations
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Solve 2 x 2 Linear Equations Using Cramer's Rule \n";
    // D
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double d = 0.0;
    double e = 0.0;
    double f = 0.0;
    double adbc = 0.0;
    double x = 0.0;
    double y = 0.0;
    
    // I
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;
    
    // P
    adbc = a * d - b * c;
    
    // cramers rvle
    x = (e * d - b * f) / adbc;
    y = (a * f - e * c) / adbc;

    // O
    if (adbc == 0) {
        cout << "The equation has no solution" << endl;;
    } else {
        cout << "x is " << x << " and y is " << y << endl;
    }
    
    
    return 0;
}
