#include <iostream>
#include "BlogPost.h"
#include "Blog.h"

/*
 *
 * Create a BlogPost class that has
    an authorName
    a title
    a text
    a publicationDate
    Create a few blog post objects:
    "Lorem Ipsum" titled by John Doe posted at "2000.05.04."
        Lorem ipsum dolor sit amet.
    "Wait but why" titled by Tim Urban posted at "2010.10.10."
        A popular long-form, stick-figure-illustrated blog about almost everything.
    "One Engineer Is Trying to Get IBM to Reckon With Trump" titled by William Turton at "2017.03.28."
        Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.
 *
 * Reuse your BlogPost class
    Create a Blog class which can
    store a list of BlogPosts
    add BlogPosts to the list
    delete(int) one item at given index
    update(int, BlogPost) one item at the given index and update it with another BlogPost
 *
 */

int main()
{
    std::cout << "Blog Posts: " << std::endl;
    BlogPost blogPost0("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    BlogPost blogPost1("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    BlogPost blogPost2("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28.");
    BlogPost blogPost3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn't want to be the center of attention. When I asked to take his picture outside one of IBM's New York City offices, he told me that he wasn't really into the whole organizer profile thing.", "2017.03.28.");


/*    std::cout << blogPost1.getTitle() << " titled by " << blogPost1.getAuthorName()
                << " posted at " << blogPost1.getPublicationDate() << " Text:" << std::endl;
    std::cout << blogPost1.getText() << std::endl << std::endl;
    std::cout << blogPost2.getTitle() << " titled by " << blogPost2.getAuthorName()
              << " posted at " << blogPost2.getPublicationDate() << " Text:" << std::endl;
    std::cout << blogPost2.getText() << std::endl << std::endl;
    std::cout << blogPost3.getTitle() << " titled by " << blogPost3.getAuthorName()
              << " posted at " << blogPost3.getPublicationDate() << " Text:" << std::endl;
    std::cout << blogPost3.getText() << std::endl << std::endl;*/

    Blog blog;
    blog.add(blogPost0);
    blog.add(blogPost1);
    blog.add(blogPost2);

    blog.deletePost(0);
    blog.update(1, blogPost3);

    std::cout << "Welcome to our Blog!" << std::endl;
    for (int i = 0; i < blog.getBlog().size(); ++i) {
        std::cout << blog.getBlog()[i].getTitle() << " titled by " << blog.getBlog()[i].getAuthorName()
                  << " posted at " << blog.getBlog()[0].getPublicationDate() << " Text:" << std::endl;
        std::cout << blog.getBlog()[i].getText() << std::endl << std::endl;
    }

    return 0;
}