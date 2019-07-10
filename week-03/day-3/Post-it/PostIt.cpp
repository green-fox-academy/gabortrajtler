//
// Created by Gabor on 2019. 07. 10..
//

#include "PostIt.h"

PostIt::PostIt(const std::string &backgroundColor, const std::string &text, const std::string &textColor)
        : _backgroundColor(backgroundColor), _text(text), _textColor(textColor)
{}

const std::string &PostIt::getBackgroundColor() const
{
    return _backgroundColor;
}

void PostIt::setBackgroundColor(const std::string &backgroundColor)
{
    PostIt::_backgroundColor = backgroundColor;
}

const std::string &PostIt::getText() const
{
    return _text;
}

void PostIt::setText(const std::string &text)
{
    PostIt::_text = text;
}

const std::string &PostIt::getTextColor() const
{
    return _textColor;
}

void PostIt::setTextColor(const std::string &textColor)
{
    PostIt::_textColor = textColor;
}
