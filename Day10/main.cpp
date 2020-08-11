//
//  main.cpp
//  Day10
//
//  Created by Jung Choi on 8/10/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int count = 0;
    int max = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    

    while(n > 0){
        if(n % 2 == 1){
            count++;
        }
        else {
            count = 0;
        }
        if(max < count ){
            max = count;
        }
        n = n / 2;
    }
    cout << max << endl;
    
    return 0;
}
