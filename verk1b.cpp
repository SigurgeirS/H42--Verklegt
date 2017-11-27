#include <iostream>
#include <fstream>

using namespace std;


int main() {

  ofstream ofs;
  string line;
  ofs.open("output1b.txt", std::ofstream::out | std::ofstream::app);

  while(getline(cin, line)){

    if(line == "\\"){
      break;
    }

  ofs << line << endl;

  }

  ofs.close();

  return 0;

}
