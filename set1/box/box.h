using namespace std;
class Box{
private:
    int m_length,m_breadth,m_height;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int length();
    int breadth();
    int height();
    int volume();
    void display();
};
