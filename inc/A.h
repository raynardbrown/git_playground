////////////////////////////////////////////////////////////////////////////////
//
// File: A.h
//
// Author: Raynard Brown
//
// Copyright (c) 2020 Raynard Brown
//
// All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef A_H_
#define A_H_

#include <memory>

class B;

/**
 * The A class.
 */
class A
{
  public:

    /**
     * Constructor
     *
     * @param[in] b the B used to initialize this A.
     */
    A(std::auto_ptr<B> b);

    /**
     * Destructor
     */
    ~A();

  private:

    std::auto_ptr<B> b;
};
#endif /* A_H_ */
