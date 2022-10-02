#include <iostream>
using namespace std;

class Shallow
{
  private:
    int *data;

  public:
    //Constructor
    Shallow(int d);

    //Copy constructor
    Shallow(const Shallow &source);

    void get_data_value()
    {
      return data;
    }

    void set_data_value(int d)
    {
      *data = d;
    }

    //Destructor
    ~Shallow();
};

Shallow::Shallow (int d)
{
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source)
  : data(source.data)
  {
    cout << "Copy constructor - shallow" << endl;
  }

Shallow::~Shallow()
{
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
  cout << s.get_data_value() << endl;
}
