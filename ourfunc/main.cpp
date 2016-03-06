//
//  main.cpp
//  ourfunc
//
//  Created by sunhongyin on 16/3/6.
//  Copyright © 2016年 sunhongyin. All rights reserved.
//

#include <iostream>
void simon(int); //function prototype for simon()

int main(int argc, const char * argv[])
{
    using namespace std;
    
    simon(3);
    cout << "Pick a integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Sion says touch your toes " << n << " times" << endl;
}
