#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "voxel.h"
#include "sculptor.h"


int main() {

  Sculptor B(30, 30, 30);
  B.setColor(0,0,0,255);
  B.putBox(1,3,1,3,1,20);
  B.setColor(200,200,200,255);
  B.putSphere(1,1,1,1);

  B.writeOFF("fosforo.off");

  return 0;
}

