#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::string oldString = "nevertellmethebots";
    int lengtToReplace = oldString.size();
    std::string newString = "nevertellmetheodds";
    int firstPos = url.find(oldString);
    int firstPosSlashes = url.find("//");

    url.replace(firstPos, lengtToReplace, newString);
    url.insert(firstPosSlashes, ":");

    std::cout << url << std::endl;

    return 0;
}