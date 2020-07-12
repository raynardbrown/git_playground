////////////////////////////////////////////////////////////////////////////////
//
// File: maincli.cpp
//
// Author: Raynard Brown
//
// Copyright (c) 2020 Raynard Brown
//
// All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "A.h"
#include "B.h"

int main(int argc, char ** argv)
{
  A a(new B());

  B * b = a.getB();

  std::cout << b->sayB() << "\n";

  return 0;
}

