#include <iostream>
#include <string>
#include <list>

using namespace std;

class StringShifter {
  private:
    list<string> sSentences;
    list<string> shiftedSentences;

  public:
  StringShifter(list<string> sentences) {
    this->sSentences = sentences;
  }
  void shift();
  list<string> split(string sentence, char delimiter);
  string join(list<string> words);
  void print();
};

void StringShifter::shift()
{
  for (int i = 0; i < sSentences.size(); i++)
  {
    string sentence = sSentences.front();
    sSentences.pop_front();
    shiftedSentences.push_back(sentence);
    list<string> wordsOfSentence = split(sentence, ' ');


    for (int j = 0; j < wordsOfSentence.size(); j++)
    {
      string firstWord = wordsOfSentence.front();
      wordsOfSentence.pop_front();
      wordsOfSentence.push_back(firstWord);
      string sentence = join(wordsOfSentence);
      print();
      shiftedSentences.push_back(sentence);
    }
  }
}

list<string> StringShifter::split(string sentence, char delimiter) {
  list<string> words;
  string word = "";
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] == ' ') {
      words.push_back(word);
      word = "";
    } else {
      word += sentence[i];
    }
  }

  return words;
}

string StringShifter::join(list<string> words) {
  string sentence = "";
  for (int i = 0; words.size(); i++) {
    sentence += words.front();
    sentence += ' ';
    words.pop_front();
  }

  return sentence;
}

void StringShifter::print() {
  for (int i = 0; i < shiftedSentences.size(); i++)
  {
    string sentence = shiftedSentences.front();
    shiftedSentences.pop_front();
    cout << sentence << endl;
  }
}

int main() {
    list<string> oraciones;
    string oracion;

    cout << "Escribe tu oracion:" << endl;
    cout << "Escribe exit para salir:" << endl;

    while (oracion != "exit") {
      getline(cin, oracion);
      oraciones.push_back(oracion + ' ');
    }

    StringShifter shifter(oraciones);
    shifter.shift();

    return 0;
}
