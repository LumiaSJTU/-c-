#include <iostream>
#include <cmath>
using namespace std;

double getAvg(double *grade, int stuNum)
{
    double sum = 0.0;
    for (int i = 0; i != stuNum; ++i)
        sum += grade[i];
    return sum / stuNum;
}

double getRot(double *grade, double avg, int stuNum)
{
    double sum = 0.0;
    for (int i = 0; i != stuNum; ++i)
        sum += pow((grade[i] - avg), 2);
    sum /= stuNum;
    return sqrt(sum);
}

char getGra(double grade, double avg, double rot)
{
    if (grade < avg - 3 * rot / 2)
        return 'F';
    else if (grade < avg - rot / 2)
        return 'D';
    else if (grade < avg + rot / 2)
        return 'C';
    else if (grade < avg - 3 * rot / 2)
        return 'B';
    else
        return 'A';
}
int main()
{
    int stuNum;
    cin >> stuNum;
    double *grade = new double[stuNum];
    char *rank = new char[stuNum];
    for (int i = 0; i != stuNum; ++i)
        cin >> grade[i];
    double avg = getAvg(grade, stuNum);
    double rot = getRot(grade, avg, stuNum);
    for (int i = 0; i != stuNum; ++i)
    {
        rank[i] = getGra(grade[i], avg, rot);
    }
    for (int i = 0; i != stuNum; ++i)
    {
        cout << rank[i] << " ";
    }

}#include <iostream>
#include <cmath>
using namespace std;

double getAvg(double *grade, int stuNum)
{
    double sum = 0.0;
    for (int i = 0; i != stuNum; ++i)
        sum += grade[i];
    return sum / stuNum;
}

double getRot(double *grade, double avg, int stuNum)
{
    double sum = 0.0;
    for (int i = 0; i != stuNum; ++i)
        sum += pow((grade[i] - avg), 2);
    sum /= stuNum;
    return sqrt(sum);
}

char getGra(double grade, double avg, double rot)
{
    if (grade < avg - 3 * rot / 2)
        return 'F';
    else if (grade < avg - rot / 2)
        return 'D';
    else if (grade < avg + rot / 2)
        return 'C';
    else if (grade < avg - 3 * rot / 2)
        return 'B';
    else
        return 'A';
}
int main()
{
    int stuNum;
    cin >> stuNum;
    double *grade = new double[stuNum];
    char *rank = new char[stuNum];
    for (int i = 0; i != stuNum; ++i)
        cin >> grade[i];
    double avg = getAvg(grade, stuNum);
    double rot = getRot(grade, avg, stuNum);
    for (int i = 0; i != stuNum; ++i)
    {
        rank[i] = getGra(grade[i], avg, rot);
    }
    for (int i = 0; i != stuNum; ++i)
    {
        cout << rank[i] << " ";
    }

}