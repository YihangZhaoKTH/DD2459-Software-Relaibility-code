//
// Created by LEGION on 2021/2/18.
//

#include "random.h"

void random::read(){
    arbitaryVector.clear();
    sortedVector.clear();

    if(!srcFile) {
        cout << "error opening source file." << endl;
        return ;
    }
    int x;

    for(int i=0;i<length;++i){
        srcFile >> x;
        arbitaryVector.push_back(x);
    }
    srcFile >> x;
    key=x;
    sortedVector=arbitaryVector;
}

void random::execute(Index (*f)(vector<int>&,int)){

    int tmp=f(sortedVector,key);

    tmp==1 ? result=1:result=-1;

}
ostream& operator<<(ostream& os,random& randomTest1){
//    os<<"length: "<<randomTest1.length<<std::endl;
//    os<<"random vector: ";
//    for(int e:(randomTest1.arbitaryVector)){
//        os<<e<<",";
//    }
    std::cout<<std::endl;

//
//    os<<"sorted vector: ";
//    for(int e:(randomTest1.sortedVector)){
//        os<<e<<",";
//    }
    std::cout<<std::endl;
    os<<"random key:"<<randomTest1.key<<std::endl;
    os<<"result: "<<((randomTest1.result==1)?"pass":"fail")<<std::endl;
    return os;
}
void random:: execute(int i){
    for(int k=0;k<i;++k){
        read();
        execute(combination_of_sort_and_binary);
        cout<<*this;
    }

}
//void random:: writeIntoFile(){
//    // open file
//    std::ofstream outFile("random.dat",std::ios::app);
////    if(!outFile) cout<<"wrong!!";
////    else cout<<"good";
//
//
//
//    for(int e: arbitaryVector){
//        outFile<<e<<",";
//    }
//    outFile<<"\r";
//    outFile<<key<<"\r";
//
//
//
//
////    long location=outFile.tellp();
////    const char* p=(char*)this;
////    outFile.write(p,sizeof(*this));
//    outFile.close();
//}

