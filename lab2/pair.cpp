//
// Created by LEGION on 2021/2/18.
//

#include "pair.h"

void pairTest::read(){
    arbitary.clear();
    sorted.clear();

    // 0-wise
    vector<int> tmp;
    int x;
    for(int i=0;i<(1+length+length*(length-1)/2);++i){
        for(int j=0;j<length;++j){
            srcFile>>x;
            tmp.push_back(x);
        }
        arbitary.push_back(tmp);
        tmp.clear();
    }
    srcFile>>x;
    key=x;
    sorted=arbitary;

}
void pairTest::test(Index (*f)(vector<int>&,int)){
    int k=0;
    cout<<key<<endl;
    for(auto &e:sorted){
        int result=f(e,key);
        if(result==1){
            r[k]=true;

        }else{
            r[k]=false;
        }
        ++k;
    }
}
void pairTest::execute(int i){
    for(int k=0;k<i;++k){
        read();
        test(combination_of_sort_and_binary);
        cout<<*this;
    }

}




void pairTest::Print(vector<int> t){
    for(auto e:t){
        cout<<e<<",";
    }

    cout<<endl;
}
//print out the result
ostream& operator<<(ostream& os,pairTest& pairTest){
    os<<"length: "<<pairTest.length<<std::endl;
    cout<<endl;
    os<<"random key:"<<pairTest.key<<std::endl;
    cout<<endl;
    os<<"test case: ";
    std::cout<<std::endl;
    for(auto &e:pairTest.arbitary){
        pairTest.Print(e);
    }


    os<<"sorted vector: "<<endl;
    cout<<endl;
   int i=0;
    for(auto &e:pairTest.sorted){
        for(auto c:e){
            cout<<c<<",";
        }
        cout<<endl;

        cout<<(pairTest.r[i]?"pass":"fail")<<endl;
        ++i;
        cout<<endl;
    }
    std::cout<<std::endl;


    return os;
}
