#include <iostream>
#include <stdlib.h>
#include <ctime>
 using namespace std;
 int main(){
    srand(time(0));
    char A[6]={'*','@','+','&','#','-'};
    for(int i=1;i<=5;i++){

    cout<<A[rand()%6]<<" ";

    }
 }
