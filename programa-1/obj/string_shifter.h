#include <vector>
#include <string>

class StringShifter
{
  public:
    void shift();
    StringShifter(vector<string> sentences);
  private:
    vector<string> sSentences;

  StringShifter::StringShifter(vector<string> sentences)
  {
    this->sSentences = sentences;
  }

  void StringShifter::shift()
  {
    for (int i = 0; i < sSentences.size(); i++)
    {
      for (int j = 0; i < sSentences[i].size(); j++)
      {
        string sSentence = sSentences[i];
        sSentences;
      }
    }
  }
};