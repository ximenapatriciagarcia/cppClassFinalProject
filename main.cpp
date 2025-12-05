#include <iostream>
#inlcude <string>
using namespace std;


int main(){
  int times, counter;
  
  cout << "Hello world" << endl;
  
  // ask how many times
  cout << "How many times do you want to count until 10?" << endl;
  cin >> times;

  
  counter = 0;
  while (counter < times){
    //Cuenta del 1 al 10
    for (int i = 0; i < 10; i++){
      cout << i << endl;
    }
      counter++;
  }
  
  return 0;
}
