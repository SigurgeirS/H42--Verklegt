#include <iostream>
#include <fstream>


using namespace std;

int main() {

std::ifstream ifs ("input.txt");

  string c;
  int cnt = 0;
  string  q = "e";
  int flg = 0;
  string line;

  while (getline(ifs,line)) {
    flg = 0;

    //c = ifs.get();
    cout << line << endl;
    cnt++;


    if (cnt % 10 == 0){
  
      while(flg == 0){
        if(q == "y" || q == "n") {
          if(q == "n"){
             return 0;
           } else {
             flg = 1;
             q = "e";
           }
        } else {
           cout << "“Do you wish to continue (y/n)?" << "\n";
           cin >> q;
        }
      }
    }
  }

  return 0;
  
}
