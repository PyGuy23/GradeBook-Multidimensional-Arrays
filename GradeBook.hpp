//
//  GradeBook.hpp
//  GradeBook Multidimensional Array
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Gradebook Multidimenional Array. All rights reserved.
//

#ifndef GradeBook_hpp
#define GradeBook_hpp

#include <stdio.h>
#include <string>
#include <array>

class GradeBook{
public:
    
    static const size_t students = 10;
    static const size_t tests = 3;
    
    GradeBook(const std::string &, std::array<std::array<int, tests>, students > &);
    
    
    void setCourseName(const std::string &);
    std::string getCourseName()const;
    void displayMessage()const;
    void processGrades()const;
    int getMinimum()const;
    int getMaximum()const;
    double getAverage(const std:: array<int, tests> &)const;
    void outputBarChart()const;
    void outputGrades()const;
    
    
    
private:
    std::string courseName;
    std::array<std::array<int, tests>, students > grades;
    
    
};

#endif /* GradeBook_hpp */
