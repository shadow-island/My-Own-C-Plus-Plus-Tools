#include <bitset>
#include <iostream>


int main()
{
  using namespace std;
  //int i = 4;   // 32비트
  //cout << "i= " << bitset<32>(i) << "(" << i << ")" << endl;
  
  char c = 4;   // 8비트
  cout << "c= " << bitset<8>(c) << "(" << c << ")" << endl;
  
  bitset< 8 > bit = c;
  cout << "c= " << bit << endl;
  for (int i = 0; i <8 ; i++)
  {
    cout << bit[i];
  }
  
  bitset<8> newBit;
  for (int i = 0; i <8 ; i++)
  {
    newBit[i] = bit[8-1 - i];
  }
  cout << endl;
  cout << "c= " << newBit << endl;
  int    nBitVal = newBit.to_ulong();
  cout << "c= " << nBitVal << endl;
  
  return 0;
}
