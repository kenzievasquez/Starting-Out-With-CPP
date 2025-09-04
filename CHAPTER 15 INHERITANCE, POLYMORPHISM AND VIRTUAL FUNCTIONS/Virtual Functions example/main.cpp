#include <iostream>
#include <iomanip>
#include "GradedActivity.h"
#include "PassFailActivity.h"

void displayGrade(const GradedActivity &);

int main(){
    PassFailActivity test(70);
    test.setScore(72);
    displayGrade(test);

    return 0;
}
//***************************************************************
// The displayGrade function displays a GradedActivity object's *
// numeric score and letter grade.
//***************************************************************
void displayGrade(const GradedActivity &activity){
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "The activity's numeric score is "
    << activity.getScore() << std::endl;
    std::cout << "The activity's letter grade is "
    << activity.getLetterGrade() << std::endl;
}