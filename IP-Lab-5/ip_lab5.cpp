#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct student
{
    string studentName;
    double score;
};

void readFromRecord (student studScoreRec[]);
double recAverage (student studScoreRec[], int s);
double recSTDev (student studScoreRec[], int s);
void writeResultToFile (double ave, double stDev);

int main()
{
    int s=7;
    student studScoreRec[s];

    readFromRecord(studScoreRec);
    double ave = recAverage (studScoreRec, s);
    double stDev = recSTDev (studScoreRec, s);
    writeResultToFile (ave, stDev);

    cout << ave << endl << stDev << endl;

}

void readFromRecord (student studScoreRec[])
{
    ifstream fileObj("StudentScore.txt");
    int i=0;

    while(!fileObj.eof())
    {
        getline(fileObj, studScoreRec[i].studentName, '\t');
        fileObj >> studScoreRec[i].score;
        i++;
    }
}

double recAverage (student studScoreRec[], int s)
{
    double sum = 0.0;

    for(int i=0; i<s; i++)
    {
        sum += studScoreRec[i].score;
    }

    return sum / s;
}

double recSTDev (student studScoreRec[], int s)
{
    double mean = recAverage (studScoreRec, s);
    double variance = 0.0;

    for(int i=0; i<s; i++)
    {
        variance += pow(studScoreRec[i].score - mean, 2);
    }

    return sqrt(variance / (s-1));
}

void writeResultToFile (double ave, double stDev)
{
    ofstream resultFile("scoreDescStat.txt");

    if(resultFile.is_open())
    {
        resultFile << "Average: " << ave << endl;
        resultFile << "Standard deviation: " << stDev << endl;

        resultFile.close();
    }
}
