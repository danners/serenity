/*
 * Copyright (c) 2021, Simon Danner <danner.simon@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibGfx/Bitmap.h>
#include <LibWeb/HTML/HTMLElement.h>
#include <LibWeb/SVG/SVGGeometryElement.h>
#include <AK/Format.h>
#include <LibWeb/SVG/SVGLength.h>
#include <LibWeb/SVG/SVGAnimatedLength.h>


namespace Web::SVG {




class SVGRectElement final : public SVGGeometryElement {
public:
    using WrapperType = Bindings::SVGRectElementWrapper;

    SVGRectElement(DOM::Document& doc, QualifiedName name):SVGGeometryElement(doc, name) {
        dbgln("constructed rect");
    };
    virtual ~SVGRectElement() override = default;

    virtual RefPtr<Layout::Node> create_layout_node() override;

    virtual void parse_attribute(const FlyString& name, const String& value) override;

    RefPtr<SVGAnimatedLength> x() {return _x; };


    RefPtr<SVGAnimatedLength> y() {return _y; };






private:

    SVGAnimatedLength _x;
    SVGAnimatedLength _y;

    virtual void apply_presentational_hints(CSS::StyleProperties&) const override;


};

}
