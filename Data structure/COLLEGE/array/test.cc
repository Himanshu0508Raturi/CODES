// Importing required headers
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <queue>
#include <random>
#include <sstream>
#include <vector>

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    // Generating random data for classification
    int X[100][5];
    int t[100];
    srand(10);
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            X[i][j] = rand() % 2;
        }
        t[i] = rand() % 2;
    } // Splitting data into train and test sets
    int X_train[70][5];
    int X_test[30][5];
    int t_train[70];
    int t_test[30];

    for (int i = 0; i < 70; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            X_train[i][j] = X[i][j];
        }
        t_train[i] = t[i];
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            X_test[i][j] = X[i + 70][j];
        }
        t_test[i] = t[i + 70];
    }

    // Randomly predicting binary values for test set
    int predicted_value[30];
    for (int i = 0; i < 30; i++)
    {
        predicted_value[i] = rand() % 2;
    }

    // Printing predicted binary values for test set
    for (int i = 0; i < 30; i++)
    {
        cout << predicted_value[i] << " ";
    }
    cout << "\n";

    // Calculating number of 0s and 1s in train set
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < 70; i++)
    {
        if (t_train[i] == 0)
        {
            zeroes += 1;
        }
        else
        {
            ones += 1;
        }
    }
    // Calculating Gini index
    float val = 1 - ((zeroes / 70.0) * (zeroes / 70.0) + (ones / 70.0) * (ones / 70.0));
    cout << "Gini : " << val << "\n";

    // Calculating accuracy of predictions
    int match = 0;
    int UnMatch = 0;
    for (int i = 0; i < 30; i++)
    {
        if (predicted_value[i] == t_test[i])
        {
            match += 1;
        }
        else
        {
            UnMatch += 1;
        }
    }
    float accuracy = match / 30.0;
    cout << "Accuracy is: " << accuracy << "\n";

    // Returning 0 on successful completion
    return 0;
}