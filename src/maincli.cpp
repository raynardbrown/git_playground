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

#include "A.h"
#include "B.h"

int main(int argc, char ** argv)
{
  A a(new B());

  return 0;
}

