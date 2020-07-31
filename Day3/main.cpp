//
//  main.cpp
//  Day3
//
//  Created by Jung Choi on 7/31/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include <iostream>
//#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //finding even
    if(N % 2 == 0 && (N > 20 || N >= 2 && N < 5)){
            cout << "Not Weird" << endl;
    }
    else {
        cout << "Weird" << endl;
    }
    
        // if(n%2==0 && (n>20|| n>=2 && n<5 ) )

        // cout<< "Not Weird"<< endl;

        // else cout << "Weird" << endl;
    return 0;
}

