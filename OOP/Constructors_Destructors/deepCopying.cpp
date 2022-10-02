#include <iostream>
using namespace std;

class Deep
{
  private:
    int *data;

  public:
    Deep(int data);
    Deep(const Deep &source);
    ~Deep();
}

Deep::Deep(int d)
{
  data = new int;
  *data = d;
}

Deep::~Deep()
{
  delete data;      //free storage
  cout << "Destructor freeing data" << endl;
}

//Deep constructor

Deep::Deep(const Deep &source)
{
  data = new int;
  *data = *source.data;
  cout << "Copy constructor - deep" << endl;
}

void display_deep(Deep s)
{
  cout << s.get_data_value() << endl;
}

int main()
{
  Deep obj1 {100};
  diplay_dep(obj1);

  Deep obj2 {obj1};
  obj2.set_data_value(1000);




  return 0;
}
