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
#include <vector>

int main() {
//   std::ofstream ofile("output.dat" , std::ios::binary);
//
//   for(int i=0;i<100;++i)
//      ofile.write(reinterpret_cast<const char *>(&i),sizeof(i));
   
   
   std::ifstream ifile("output.dat", std::ios::binary);
   std::vector<int> v(100);
   ifile.read(reinterpret_cast<char *>(&v[0]),sizeof(int)*100);
   std::cout << v[88] << "\n";
   return 0;
}
