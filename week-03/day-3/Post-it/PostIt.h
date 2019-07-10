#include <iostream>
#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H


class PostIt
{
public:
    PostIt(const std::string &backgroundColor, const std::string &text, const std::string &textColor);

    const std::string &getBackgroundColor() const;

    void setBackgroundColor(const std::string &backgroundColor);

    const std::string &getText() const;

    void setText(const std::string &text);

    const std::string &getTextColor() const;

    void setTextColor(const std::string &textColor);

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //POST_IT_POSTIT_H
