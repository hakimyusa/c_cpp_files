#include <iostream>
 
using namespace std;
 
int main()
{
  char nilai;
  
  int x = 64;
  int y = 32;
 
  if (x < y) {
    cout << "X Lebih Besar daripada Y" << endl;
  }
  else if (x > y) {
    cout << "X Lebih Kecil daripada Y" << endl;
  }
  
  else {
    cout << "X Sama dengan Y" << endl;
  }
 
  return 0;
}
