#include <iostream>
#include <vector>
using namespace std;

class Move
{
  private:
    int *data;

  public:
    void set_data_value(int d)
    {
      *data = d;
    }

    int get_data_value()
    {
      return *data;
    }

    Move(int d);                                      //Constructor

    Move(const Move &source);                         //Copy Constructor

    Move(Move &&source);

    ~Move();                                          //Destructor
}

Move::Move (const Move &source)
{
  data = new int;
  *data = *source.data;
}

Move::Move(Move &&source)
  : data{source.data}
  {
    source.data = nullptr;
  }

int main()
{
  Vector <Move> vec;

  vec.push_back(Move{10});
  vec.push_back(Move{20});

  for (int i = 0; i < 2; i++)
  {
    cout << vec[i] << " ";
  }

  cout << endl;




  return 0;
}
