class Distance{
int m_feets, m_inches;
public:
    Distance();
    Distance(int x, int y);
    Distance operator+(const Distance &);
    Distance operator-(const Distance &);
    Distance operator+(int );
    Distance operator-(int );
    Distance& operator++();
    Distance& operator++(int );
    bool operator==(const Distance&);
    bool operator<(const Distance&);
    bool operator>(const Distance&);
    void display();
};
