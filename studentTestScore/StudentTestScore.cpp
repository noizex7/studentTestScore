#include "StudentTestScores.h"

void StudentTestScores::createTestScoresArray(int size)
{
    numTestScores = size;
    testScores = new double[size];
    for (int i = 0; i < size; i++)
        testScores[i] = DEFAULT_SCORE;
}

StudentTestScores::StudentTestScores(char* name, int numScores)
{
    studentName = new char[25];

    strcpy_s(studentName,strlen(studentName) - 1, name);

    createTestScoresArray(numScores);
}

StudentTestScores::StudentTestScores(const StudentTestScores& obj)
{
    strcpy_s(studentName, strlen(studentName) - 1, obj.studentName);

    numTestScores = obj.numTestScores;

    testScores = new double[numTestScores];

    for (int i = 0; i < numTestScores; i++)
        testScores[i] = obj.testScores[i];
}

StudentTestScores::~StudentTestScores()
{
    delete[] testScores;
    delete[] studentName;
}

void StudentTestScores::setTestScore(double score, int index)
{
    testScores[index] = score;
}

// Set the student's name.
void StudentTestScores::setStudentName(char* name)
{
    strcpy_s(studentName, strlen(studentName) - 1, name);
}

// Get the student's name.
char* StudentTestScores::getStudentName() const
{
    return studentName;
}
// Get the number of test scores.
int StudentTestScores::getNumTestScores() const
{
    return numTestScores;
}

// Get a specific test score.
double StudentTestScores::getTestScore(int index) const
{
    return testScores[index];
}

// Overloaded = operator
void StudentTestScores::operator=(const StudentTestScores& right)
{
    delete[] testScores;

    strcpy_s(studentName, strlen(studentName) - 1, right.studentName);

    numTestScores = right.numTestScores;

    testScores = new double[numTestScores];

    for (int i = 0; i < numTestScores; i++)
        testScores[i] = right.testScores[i];
}