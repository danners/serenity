/*
 * Copyright (c) 2021, Simon Danner <danner.simon@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Format.h>
#include <AK/FlyString.h>
#include <LibWeb/Bindings/Wrappable.h>


namespace Web::SVG {

class SVGLength: public RefCounted<SVGLength>,
        public Bindings::Wrappable
{
public:
    using WrapperType = Bindings::SVGLengthWrapper;

    SVGLength(){};
    float value;
    float valueInSpecifiedUnits;
    FlyString valueAsString;

    enum LengthType {
        SVG_LENGHTTYPE_UNKNOWN = 0,
        SVG_LENGHTTYPE_NUMBER = 1
    };
};

}

