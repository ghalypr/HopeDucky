#include "include/HopeDucky.h"


using namespace std;


int main(){


  WinKey();
  Sleep(500);
  PressKeys("run");
  Sleep(500);
  ReturnKey();
  Sleep(500);
  PressKeys("powershell");
  Sleep(500);
  ReturnKey();
  Sleep(500);
  PressKeys("echo 'Hello World From HopeDucky!'");
  Sleep(500);
  ReturnKey();




    return 0x0;
}