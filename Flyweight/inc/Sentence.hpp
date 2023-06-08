#ifndef SENTENCE_HPP
#define SENTENCE_HPP

#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

class Sentence
{
private:
    struct WordToken {
        bool capitalize;
    };

    vector<string> words;
    map<int, WordToken> word_tokens;

public:
    Sentence(const string& text);

    WordToken& operator[](size_t index);

    string str() const;
};


#endif // SENTENCE_HPP