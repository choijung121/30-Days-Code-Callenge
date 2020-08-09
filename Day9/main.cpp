//
//  main.cpp
//  Day9
//
//  Created by Jung Choi on 8/9/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if(n > 1){
        return n * factorial(n -1);
    }
    else {
        return 1;
    }

}

int main()
{
//    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

//    fout << result << "\n";
    cout << result << "\n";

//    fout.close();

    return 0;
}
