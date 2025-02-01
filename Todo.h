#pragma once

#include <string>
using namespace std;

class Todo
{
  private:
    int id;
    string title;
    string description;
    bool isDone;
    int creatorId;
    static inline int idcounter = 0;

  public:
    Todo()
    {
      this->id = ++idcounter;
      this->title = "";
      this->description = "";
      this->isDone = false;
      this->creatorId = 0;
    }

    Todo(string title, string description, bool isDone, int creatorId)
    {
      this->id = ++idcounter;
      this->title = title;
      this->description = description;
      this->isDone = isDone;
      this->creatorId = creatorId;
    }

    int getId()
    {
      return this->id;
    }

    string getTitle()
    {
      return this->title;
    }

    string getDescription()
    {
      return this->description;
    }

    bool getIsDone()
    {
      return this->isDone;
    }

    int getCreatorId()
    {
      return this->creatorId;
    }

    void setTitle(string title)
    {
      this->title = title;
    }

    void setDescription(string description)
    {
      this->description = description;
    }

    void setIsDone(bool isDone)
    {
      this->isDone = isDone;
    }

    void setCreatorId(int creatorId)
    {
      this->creatorId = creatorId;
    }
};
