//
// Created by LEGION on 2021/2/12.
//

#include "functions.h"
vector<int>& my_sort(vector<int> &v){
    vector<int>* v2=new vector<int>();
    int min;

   while(!v.empty()){
       min=v[0];
       auto min_iter=v.begin();

       for(auto iter=v.begin();iter!=v.end();++iter){
           if(*iter<min){
               min=*iter;
               min_iter=iter;
           }
       }
       v2->push_back(min);
       v.erase(min_iter);
   }
   v=*v2 ;
   delete v2;
   return v;
}



Index my_binary_search(vector<int>& v,int key){
    int l,r,x;
    l=0;
    r=v.size()-1;
    x=(l+r)/2;
    while(v[x]!=key&&(l<=r)){
        if(v[x]<key) l=x+1;
        else r=x-1;
        x=(l+r)/2;

    }
   return (l<=r)?1:-1;
}
//if the return =-1, not found
//return== 1, found
Index combination_of_sort_and_binary(vector<int>&v,int key){
    v=my_sort(v);
    //std::cout<<"sorted successful"<<std::endl;
    return my_binary_search(v,key);
}