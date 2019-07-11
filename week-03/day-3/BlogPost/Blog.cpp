//
// Created by Gabor on 2019. 07. 11..
//

#include "Blog.h"

void Blog::add(BlogPost post)
{
    _blog.push_back(post);
}

void Blog::deletePost(int index)
{
    _blog.erase(_blog.begin()+index);
}

void Blog::update(int index, BlogPost post)
{
    _blog.insert(_blog.begin()+index, post);
    _blog.erase(_blog.begin()+index+1);
}

Blog::Blog()
{}

const std::vector<BlogPost> &Blog::getBlog() const
{
    return _blog;
}
