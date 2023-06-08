#include "Sentence.hpp"

Sentence::Sentence(const string& text) {
    istringstream ss(text);
    words = vector<string>(istream_iterator<string>{ss},
        istream_iterator<string>{});
}

Sentence::WordToken& Sentence::operator[](size_t index) {
    word_tokens.insert({ index, WordToken{false} });
    return word_tokens[index];
}

string Sentence::str() const {
    stringstream st;

    for (int i = 0; i < words.size(); i++) {
        if (i != 0)
            st << ' ';
        auto token = word_tokens.find(i);

        if (token != word_tokens.end() && token->second.capitalize) {
            string word = words[i];
            transform(word.begin(), word.end(), word.begin(), ::toupper);
            st << word;
        }
        else
            st << words[i];
    }

    return st.str();
}