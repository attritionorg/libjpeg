/*************************************************************************

    This project implements a complete(!) JPEG (10918-1 ITU.T-81) codec,
    plus a library that can be used to encode and decode JPEG streams. 
    It also implements ISO/IEC 18477 aka JPEG XT which is an extension
    towards intermediate, high-dynamic-range lossy and lossless coding
    of JPEG. In specific, it supports ISO/IEC 18477-3/-6/-7/-8 encoding.

    Copyright (C) 2012-2015 Thomas Richter, University of Stuttgart and
    Accusoft.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/
/*
**
** This class represents one row of quantized data of coefficients, i.e. one
** row of 8x8 blocks.
**
** $Id: quantizedrow.hpp,v 1.10 2014/09/30 08:33:16 thor Exp $
**
*/

#ifndef CODING_QUANTIZEDROW_HPP
#define CODING_QUANTIZEDROW_HPP

/// Includes
#include "tools/environment.hpp"
#include "coding/blockrow.hpp"
///

/// class QuantizedRow
// This class represents one row of quantized data of coefficients, i.e. one
// row of 8x8 blocks.
class QuantizedRow : public BlockRow<LONG> {
  // Nothing new in it.
public:
  QuantizedRow(class Environ *env)
    : BlockRow<LONG>(env)
  { }
  //
  ~QuantizedRow(void)
  { }
};
///

#endif
