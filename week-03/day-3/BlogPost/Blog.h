//
// Created by Gabor on 2019. 07. 11..
//

#ifndef BLOGPOST_BLOG_H
#define BLOGPOST_BLOG_H


#include <vector>
#include "BlogPost.h"

class Blog
{
public:
    Blog();
    void add(BlogPost post);
    void deletePost(int index);
    void update(int index, BlogPost post);

    const std::vector<BlogPost> &getBlog() const;

private:
    std::vector<BlogPost> _blog;
};


#endif //BLOGPOST_BLOG_H
