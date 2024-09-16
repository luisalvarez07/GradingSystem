#include "GradedActivity.h"
#include <iostream>

//Definition of the essay class derived from graded activity
class Essay : public GradedActivity {
private:
    double grammar;
    double spelling;
    double length;
    double content;

public:
    Essay();

    //Member function to set scores for each section and caluculate total scores
    void setScores(double g, double s, double l, double c);

    //Accessor functions to get scores for each section
    double getGrammar() const;
    double getSpelling() const;
    double getLength() const;
    double getContent() const;
};

//Default constructor
Essay::Essay() : GradedActivity(), grammar(0.0), spelling(0.0), length(0.0), content(0.0) {}

//Member function to set scores for each section and calculate total score
void Essay::setScores(double g, double s, double l, double c) {
    grammar = g;
    spelling = s;
    length = l;
    content = c;
    setScore(grammar + spelling + length + content);
}
//Accessor functions to get scoers for each section
double Essay::getGrammar() const {
    return grammar;
}

double Essay::getSpelling() const {
    return spelling;
}

double Essay::getLength() const {
    return length;
}

double Essay::getContent() const {
    return content;
}

//Main function to demonstrate the essay class
int main() {
    double grammar, spelling, length, content;

    //Get input from the user
    std::cout << "Enter points received for Grammar (out of 20): ";
    std::cin >> grammar;

    std::cout << "Enter points received for Spelling (out of 25): ";
    std::cin >> spelling;

    std::cout << "Enter points received for Correct Length (out of 35): ";
    std::cin >> length;

    std::cout << "Enter points received for Content (out of 25): ";
    std::cin >> content;

    //Create an Essay object
    Essay essay;

    //Set scores for each section
    essay.setScores(grammar, spelling, length, content);

    //Display numeric and letter grades
    std::cout << "\nEssay Grades:\n";
    std::cout << "Numeric Score: " << essay.getScore() << std::endl;
    std::cout << "Letter Grade: " << essay.getLetterGrade() << std::endl;

    return 0;
}
