//
//  main.cpp
//  BinaryStreams
//
//  Created by Chris Hartman on 9/24/19.
//  Copyright © 2019 Chris Hartman. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
//   std::ofstream ofile("output.txt");
//
//   for(int i=0;i<100;++i)
//      ofile << std::setw(6) << i*i;
   
   
   std::ifstream ifile("output.txt");
   ifile.seekg(6*42);
   int x;
   ifile >> x;
   std::cout << x << "\n";
   return 0;
}
