#include <iostream>
#include "functions.h"
#include "random.h"
#include "pair.h"
#include "testcase.h"
using std::cout;
using std::endl;

#define N 3

int main() {
if(N==0){
    generate_random_testcase();
}else if(N==1){
    generate_pair_testcase();
}else if (N==2){
    //10 test suits in pair.txt
    pairTest p;
    p.execute(6);

}else{
    //10 test suits in random.txt ffpfffffff
    random r;
    r.execute(10);
}

return 0;




}
