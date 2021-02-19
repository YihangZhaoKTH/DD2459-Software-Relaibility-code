//
// Created by LEGION on 2021/2/12.
//

#ifndef LAB2_FUNCTIONS_H
#define LAB2_FUNCTIONS_H
#include <vector>
#include <iostream>
using std::vector;

//sort the input vector in the ascending order
vector<int>& my_sort(vector<int>& v);

typedef int Index;
Index my_binary_search(vector<int>& v,int key);

Index combination_of_sort_and_binary(vector<int>&v,int key);



#endif //LAB2_FUNCTIONS_H
