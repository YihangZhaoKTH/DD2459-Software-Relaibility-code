//
// Created by LEGION on 2021/2/18.
//

#ifndef MAIN_CPP_RANDOM_H
#define MAIN_CPP_RANDOM_H
#include "config.h"
#include <iostream>
#include "functions.h"
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;
using std::string;
//#include <random>
using std::ostream;
using std::cout;
using std::endl;
class random {

public:
    vector<int> arbitaryVector;
    //////////////////////////////////////////////////////////////////////////////
   int length=10;
//    int length=100;
 //   int length=500;
 ////////////////////////////////////////////////////////////////////////////
    vector<int> sortedVector;

    int key;
    int result;
    ifstream srcFile;
    random(){
        //////////////////////////////////////////////////
        srcFile.open(random_path10,ios::in);
        ///////////////////////////////////////////////////
        key=0;
        result=0;
    }
    ~random(){
        srcFile.close();
    }
    void read();
    void execute(Index(*f)(vector<int>&,int));
    void execute(int i);



};
ostream& operator<<(ostream& os,random& randomTest);
void randomTestExecute();

#endif //MAIN_CPP_RANDOM_H
