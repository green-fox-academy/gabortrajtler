#include <iostream>
#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H


class BlogPost
{
public:
    BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::string &publicationDate);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

private:

    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOGPOST_BLOGPOST_H
