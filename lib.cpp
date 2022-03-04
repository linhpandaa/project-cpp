#include<iostream>
#include<vector>
#include<limits>
#include"lib.h"

using namespace std;

// Input data
vector<int> input(){
    int x;
    vector<int> array;

    while(1){
        cin >> x;
        if(x != 0){
            array.push_back(x);
        }
        else{
            break;
        }
    }

    return array;
}

// Get the maximum even element
int max_even(vector<int> array){
    int max_even = 0;
    int length = array.size();

    for(int i=0; i < length; i++){
        if(array[i] % 2 == 0 && array[i] > max_even){
            max_even = array[i];
        }
    }

    return max_even;
}

// Get the number of smallest elements
int get_num_min_elements(vector<int> array){
    int min_element = std::numeric_limits<int>::max();
    int num_min_element = 0;
    int length = array.size();

    for(int i = 0; i < length; i++){
        if(array[i] < min_element){
            min_element = array[i];
            num_min_element = 0;
        }
        if(array[i] == min_element){
            num_min_element++;
        }
    } 

    return num_min_element;
}

// Check whether a number is a fibonacci number
bool is_fibonacci(int n){
    int f1 = 0;
    int f2 = 1;
    if(n==f1 || n==f2) return true;
    int c = f1 + f2;
    while(c <= n){
        if(c == n) return true;
        else{
            f1 = f2;
            f2 = c;
            c = f1 + f2;
        }
    }   
    return false;
}
 
// Calculate the sum of fibonacci elements
int get_fibonacci_sum(vector<int> array){
    int fibonacci_sum = 0;
    int length = array.size();

    for(int i = 0; i < length; i++){
        if(is_fibonacci(array[i])){
            fibonacci_sum += array[i];
        }
    }

    return fibonacci_sum;
}


