#include "AudioBook.h"

AudioBook::AudioBook(string Title, string authorName, string voiceActor) : Book(Title, authorName)
{
  this->Title = Title;
  this->authorName = authorName;
  this->voiceActor = voiceActor;
};
string AudioBook::getVoiceActor()
{
  return this->voiceActor;
};
void AudioBook::setVoiceActor(string voiceActor)
{
  this->voiceActor = voiceActor;
};

void AudioBook::printDescription()
{
  cout << this->Title << " is written by " << this->authorName << " and voiced by " << this->voiceActor << endl;
};
