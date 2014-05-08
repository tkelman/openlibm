/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */


#include "cdefs-compat.h"

#include "openlibm.h"
#include "math_private.h"

DLLEXPORT long double
ldexpl (long double x, int n)
{
    return scalbnl(x,n);
}
