#include "GradedActivity.h"

//Constructors
GradedActivity::GradedActivity() : score(0.0) {}

GradedActivity::GradedActivity(double s) : score(s) {}

//Mutator function to set the score
void GradedActivity::setScore(double s) {
    score = s;
}

//Accessor fucntion to get the score
double GradedActivity::getScore() const {
    return score;
}

//Accessor function to get the letter ggrade based on the score
char GradedActivity::getLetterGrade() const {
    char letterGrade;

    if (score > 89) {
        letterGrade = 'A';
    }
    else if (score > 79) {
        letterGrade = 'B';
    }
    else if (score > 69) {
        letterGrade = 'C';
    }
    else if (score > 59) {
        letterGrade = 'D';
    }
    else {
        letterGrade = 'F';
    }

    return letterGrade;
}
