#include <iostream>
using namespace std;
int main(){
  int count = 0;
  while(true){
    count += 1;
    if (count > 10){
      break;
    }
    if (count == 5){
      //cout << endl;
      continue;
    }
    cout << count << endl;
  }
  return 0;
}
