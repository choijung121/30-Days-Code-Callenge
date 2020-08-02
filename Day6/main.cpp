//
//  main.cpp
//  Day6
//
//  Created by Jung Choi on 8/1/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cout << "input number: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        string odd;
        string even;
        for(int j = 0; j < s.size(); j++){
            if(j%2 == 0){
                even += s[j];
            }
            else{
                odd += s[j];
            }
        }
        cout << even << " " << odd << endl;
    }
    return 0;
}
