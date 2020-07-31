//
//  main.cpp
//  Day1
//
//  Created by Jung Choi on 7/31/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int integerPlus = 0;
    double doublePlus = 0.0;
    string stringPlus = "";

    cin >> integerPlus;
    int intSum = i + integerPlus;
    cout << intSum << endl;
    cin.ignore();
    
    cin >> doublePlus;
    double sum;
    sum = d + doublePlus;
    cout << fixed << setprecision(1) << sum << endl;
    cin.ignore();
    
    getline(cin, stringPlus);
    cout << s + stringPlus << endl;

    return 0;
}
