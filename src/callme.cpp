#include <stdio.h>
#include <iostream>

int main(int argc, char** argv){
   printf("hello world\n");
   std::cout<<__FUNCTION__<<" your logging message here "<<__FILE__<<":"<<__LINE__<<std::endl;
}
