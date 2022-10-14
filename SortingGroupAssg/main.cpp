#include <iostream>
#include <string.h>
using namespace std;
#include "sorting.h"
#include <algorithm>
#include <chrono>
#include<vector>
#include <chrono>
using namespace std::chrono;
//To run: ./main (type of sorting) (numbers),(numbers),....
/*
ex :
./main bubble 1 2 3 4 5
./main insert 1 2 3 4 5
./main select 1 2 3 4 5
*/
int main(int argc, char **argv) {
auto start = high_resolution_clock::now();

  int b[argc-2];
  for (int i=0; i<argc-2; i++){
    b[i] = atoi(argv[i+2]);
  }
  if (strcmp(argv[1], "bubble")==0){
    bubbleSort(b, argc-2);
    
  }else if (strcmp(argv[1], "insert")==0){
    insertionSort(b, argc-2);
    
  }else if (strcmp(argv[1], "select")==0){
    selectionSort(b, argc-2);
  }
auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time calculated : "
         << duration.count() << " microseconds" << endl;
}
