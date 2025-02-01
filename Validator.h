#pragma once

#include <string>
using namespace std;

class Validator
{
  public:
    static bool isValidName(string name)
    {
      if (name.length() < 2)
      {
        return false;
      }
      return true;
    }

    static bool isValidEmail(string email)
    {
      if (email.find("@") == string::npos)
      {
        return false;
      }
      return true;
    }

    static bool isValidPassword(string password)
    {
      if (password.length() < 8)
      {
        return false;
      }
      return true;
    }
};
