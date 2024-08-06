#include "odom1.h"
#include<iostream>
#include<unistd.h>
#include<string>
//可能会用到的命名空间 cv std
//不建议using namespace xxx
void odomtest::loading(){
    std::cout<<"loading..."<<std::endl;
    rep(i) {std::cout<<i<<"/100"<<std::endl;usleep(100000);std::cout << "\033[A\033[K";}
    std::cout<<"starting!";
}
/*write your code*/