#include<iostream>
#include<vector>
#include "lib.h"

using namespace std;

int main(){
    vector<int> test;

    test = input();
    cout << "The maximum even element - " << max_even(test) << endl;
    cout << "The number of elements equal to the smallest element - " << get_num_min_elements(test) << endl;
    cout << "The sum of the fibonacci elements - " << get_fibonacci_sum(test) << endl;
    
    return 0;
}