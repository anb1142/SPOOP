#pragma once
#include "Book.h"
class AudioBook : public Book
{
private:
  string voiceActor;

public:
  AudioBook(string Title, string authorName, string voiceActor);
  string getVoiceActor();
  void setVoiceActor(string voiceActor);
  void printDescription();
};