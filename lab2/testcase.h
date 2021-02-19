//
// Created by LEGION on 2021/2/18.
//

#ifndef MAIN_CPP_TESTCASE_H
#define MAIN_CPP_TESTCASE_H
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include "pair.h"
#include "config.h"
using namespace std;
void generate_random_testcase();
void generate_pair_testcase();

vector<int> wise_1(multimap<int,pairTest::value> m,int i);
vector<int> wise_2(multimap<int,pairTest::value> m,int i,int j);

#endif //MAIN_CPP_TESTCASE_H
