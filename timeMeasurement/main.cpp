//
//  main.cpp
//  timeMeasurement
// Using the <Chrono> header in C++11 Measure the actual sytem time that passes while a funciton is run.
//  Created by Jon Lowrey on 10/25/15.
//  Copyright © 2015 Jon Lowrey. All rights reserved.
//

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void runIt()
{
    long long number = 0;
    
    for( long long i = 0; i != 2000000; ++i )
    {
        number += 5;
    }
}

int main()
{
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    runIt();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    
    cout << duration;
    return 0;
}