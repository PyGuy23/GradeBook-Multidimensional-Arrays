//
//  main.cpp
//  GradeBook Multidimensional Array
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Gradebook Multidimenional Array. All rights reserved.
//

#include <iostream>
#include<array>
#include "GradeBook.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    array<array<int, GradeBook::tests>, GradeBook::students> grades =
       { 87, 96, 70,
         68, 87, 90,
         94, 100, 90,
         100, 81, 82,
         83, 65, 85,
         78, 87, 65,
         85, 75, 85,
         91, 94, 100,
         76, 72, 84,
         87, 93, 73  };
    
    GradeBook myGradeBook(
        "CS101 Introduction to C++ Programming", grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    
    
    
     
    
        return 0;
}
