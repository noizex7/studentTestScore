#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H

#include <cstring>


using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    char* studentName; // The student's name
    double* testScores; // Points to array of test scores
    int numTestScores; // Number of test scores

    // Private member function to create an
    // array of test scores.
    void createTestScoresArray(int);

public:
    // Constructor
    StudentTestScores(char*, int);


    // Copy constructor
    StudentTestScores(const StudentTestScores&);


    // Destructor
    ~StudentTestScores();

    // The setTestScore function sets a specific
    // test score's value.
    void setTestScore(double, int);


    // Set the student's name.
    void setStudentName(char*);


    // Get the student's name.
    char* getStudentName() const;

    // Get the number of test scores.
    int getNumTestScores() const;

    // Get a specific test score.
    double getTestScore(int) const;

    // Overloaded = operator
    void operator=(const StudentTestScores&);
};
#endif 