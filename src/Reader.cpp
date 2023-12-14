//
// Created by tm023756 on 12/14/2023.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 22;
int grades[SIZE];

void readData() {

    int i = 0;
    int grades[i];

    string inFileName = "grades.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (i = 0; i < SIZE; i++)
        {
            inFile >> grades[i];
            cout << grades[i] << " ";
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}

    double getAverage() {

        return 0;
    }

    void printGradesTable() {

    }

    void printGradesInRow() {

    }


    void min () {
        int pos = 0;
        int minimum = grades[pos];

        cout << "Minimum " << minimum << " at position " << pos << endl;
    }

    void max () {
        int pos = 0;
        int maximum = grades[pos];

        cout << "Maximum " << maximum << " at position " << pos << endl;
    }

    void sort() {

    }



int main ()
{
    readData();
    return 0;
}
