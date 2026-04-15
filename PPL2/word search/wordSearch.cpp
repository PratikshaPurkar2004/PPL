#include "wordSearch.h"

wordSearch::wordSearch(string t,string w)
{
    text=t;
    word=w;
}

bool wordSearch::search()
{
    return text.find(word) != string::npos;
}