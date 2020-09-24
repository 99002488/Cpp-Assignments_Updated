using namespace std;
class Box{
private:
    int m_length,m_breadth,m_height;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    void length(int);
    void breadth(int);
    void height(int);
    void volume(int,int,int);
    void display();
};
