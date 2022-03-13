#include <stdio.h>
#include <iostream>

int main(int argc, char** argv){
	printf("hello python with args\n");
	printf("argc: %d\n", argc);
	for(int i=0;i<argc;i++){
		printf("argv[%d]: %s\n",i,argv[i]);
   }
	std::cout<<__FUNCTION__<<" your logging message here "<<__FILE__<<":"<<__LINE__<<std::endl;
}
