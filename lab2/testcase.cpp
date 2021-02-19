//
// Created by LEGION on 2021/2/18.
//

#include "testcase.h"
void generate_random_testcase(){
    vector<int> arbitaryVector;
    int key;
    int length;
    srand (time(NULL));
    ////////////////////////////////////////////
        length=10;
 //   length=100;
//    length=500;
//////////////////////////////////////////////////
    for(int i=0;i<length;++i){
        arbitaryVector.push_back(rand()%100);

    }
    key=rand()%100;
    /////////////////////////////////////////////////////////////////////////
    std::ofstream outFile(random_path10,std::ios::app|std::ios::out);
   /////////////////////////////////////////////////////////////////////////

    for(int e: arbitaryVector){
        outFile<<e<<" ";
    }
    outFile<<"\r";
    outFile<<key<<"\r";

    outFile.close();

}

void generate_pair_testcase(){
    std::ofstream outFile;
    outFile.open("pair.txt",std::ios::app|std::ios::out);


    multimap<int,pairTest::value> m;
    vector<vector<int> > arbitary;
    //vector<vector<int> > sorted;
    srand (time(NULL));
//    length=(rand()%20)+1;
int length,key;
    length=10;
    key=rand()%50;

    for(int i=0;i<length;++i){
        m.insert(make_pair(i,pairTest::value(rand()%50,rand()%50)));
    }
    vector<int> tmp;
    for(auto iter=m.begin();iter!=m.end();++iter){

        tmp.push_back(iter->second.default_value);
    }
    arbitary.push_back(tmp);

    //1-wise
    //the #i is the non-default;
    for(int i=0;i<length;++i){
        arbitary.push_back(wise_1(m,i));
    };

    //2-wise
    //the #i and #j are not non-default
    for(int i=0;i<length;++i){
        for(int j=i+1;j<length;++j)
            arbitary.push_back(wise_2(m,i,j));
        }


    for(auto& e: arbitary){
        for(auto c:e){
            outFile<<c<<" ";
        }
        outFile<<"\r";
    }
    outFile<<key<<"\r";


};

vector<int> wise_1(multimap<int,pairTest::value> m,int i){
    vector<int> tmp;
    for(auto iter=m.begin();iter!=m.end();++iter){

       if(iter->first!=i) tmp.push_back(iter->second.default_value);
       else tmp.push_back(iter->second.non_default);
    }
    return tmp;
}
vector<int> wise_2(multimap<int,pairTest::value> m,int i,int j){
    vector<int> tmp;
    for(auto iter=m.begin();iter!=m.end();++iter){

        if(iter->first!=i&&(iter->first!=j)) tmp.push_back(iter->second.default_value);
        else tmp.push_back(iter->second.non_default);
    }
    return tmp;
}




