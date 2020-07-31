//
//  main.cpp
//  Day5
//
//  Created by Jung Choi on 7/31/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i = 1; i < 11; i++){
        int mult = n * i;
        cout << n << " x " << i << " = " << mult << endl;
    }

    return 0;
}
