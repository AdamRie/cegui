/***********************************************************************
    created:    Mon Jul 6 2009
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2009 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#include "CEGUI/JustifiedRenderedString.h"
#include "CEGUI/RenderedString.h"

namespace CEGUI
{

//----------------------------------------------------------------------------//
void JustifiedRenderedString::format(const RenderedString& rs, const Window* refWnd, const Sizef& areaSize)
{
    d_renderedString = &rs;

    d_spaceExtras.clear();

    d_extent.d_width = 0.f;
    d_extent.d_height = 0.f;

    for (size_t i = 0; i < d_renderedString->getLineCount(); ++i)
    {
        const size_t spaceCount = d_renderedString->getSpaceCount(i);
        const Sizef lineExtent = d_renderedString->getLineExtent(refWnd, i);
        const bool justifyable = (spaceCount && lineExtent.d_width < areaSize.d_width);

        d_spaceExtras.push_back(justifyable ? ((areaSize.d_width - lineExtent.d_width) / spaceCount) : 0.f);

        d_extent.d_height += lineExtent.d_height;

        const float lineWidth = justifyable ? areaSize.d_width : lineExtent.d_width;
        if (d_extent.d_width < lineWidth)
            d_extent.d_width = lineWidth;
    }
}

//----------------------------------------------------------------------------//
void JustifiedRenderedString::createRenderGeometry(std::vector<GeometryBuffer*>& out,
    const Window* refWnd, const glm::vec2& position, const ColourRect* modColours, const Rectf* clipRect) const
{
    if (!d_renderedString)
        return;

    glm::vec2 drawPos = position;
    for (size_t i = 0; i < d_renderedString->getLineCount(); ++i)
    {
        d_renderedString->createRenderGeometry(out, refWnd, i, drawPos, modColours, clipRect, d_spaceExtras[i]);
        drawPos.y += d_renderedString->getLineExtent(refWnd, i).d_height;
    }
}

}
