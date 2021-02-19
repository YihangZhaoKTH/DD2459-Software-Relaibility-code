//
// Created by LEGION on 2021/2/18.
//

#ifndef MAIN_CPP_PAIR_H
#define MAIN_CPP_PAIR_H
#include <iostream>
#include "functions.h"
//#include <random>
#include <stdlib.h>
#include <time.h>
#include <map>
#include <fstream>
#include <string>
using namespace std;

class pairTest {
public:
    struct value{
        int default_value;
        int non_default;
        value(int default_value,int non_default):default_value(default_value),non_default(non_default){};
    };

    void Print(vector<int> t);

public:
    int length=10;
    int key;
    multimap<int,value> m;
    vector<vector<int> > arbitary;
    vector<vector<int> > sorted;
    vector<bool> r;
    ifstream srcFile;
    pairTest(){
        srcFile.open("pair.txt",std::ios::in);
        key=0;
        r=vector<bool>(1+length+length*(length-1)/2);
    }
    void read();
    void test(Index (*f)(vector<int>&,int));
    void execute(int i);


   friend ostream& operator<<(ostream& os,pairTest& pairTest);
   ~pairTest(){
       srcFile.close();
   }


};


#endif //MAIN_CPP_PAIR_H
