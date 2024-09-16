#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity {
private:
    double score;

public:
    //Constructors
    GradedActivity();
    GradedActivity(double s);

    //Member functions
    void setScore(double s);
    double getScore() const;
    char getLetterGrade() const;
};

#endif

