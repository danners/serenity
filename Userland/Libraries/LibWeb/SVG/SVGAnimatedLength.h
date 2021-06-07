/*
 * Copyright (c) 2021, Simon Danner <danner.simon@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once

#include <LibWeb/Bindings/Wrappable.h>
#include <LibWeb/SVG/SVGLength.h>
#include <LibWeb/Forward.h>
#include <LibWeb/HTML/HTMLElement.h>


namespace Web::SVG {
class SVGAnimatedLength: public RefCounted<SVGAnimatedLength>,
        public Bindings::Wrappable
{



public:
        using WrapperType = Bindings::SVGAnimatedLengthWrapper;
        SVGAnimatedLength(){};




        RefPtr<SVGLength> base_val() {return baseVal; };
        RefPtr<SVGLength> anim_val() {return animVal; };

        SVGLength baseVal;
        SVGLength animVal;

private:



};
}

