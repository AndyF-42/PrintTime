// Author: Andy Fleischer
// Date: 7/18/2021
// Prints out the current time in format:
//        Fri May 28 18:15:26 2021

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    time_t current_time = time(NULL);     // get the time
    cout << ctime(&current_time) << endl; // use ctime for formatting
    return 0;
}
