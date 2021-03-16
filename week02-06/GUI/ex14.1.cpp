#include "Simple_window.h"
#include "Graph.h"

struct Smiley : Circle {
    Smiley(Point p, int r);

    void draw_lines () const;

private:
    int r;          // radius
    Circle left;    // left eye
    Circle right;   // right eye
    Arc mouth;      // mouth
};

struct Frowny : Circle {
    Frowny(Point p, int r);

    void draw_lines () const;

private:
    int r;          // radius
    Circle left;    // left eye
    Circle right;   // right eye
    Arc mouth;      // mouth
};

struct Smiley_hat : Smiley {
    Smiley_hat(Point p, int r);

    void draw_lines () const;

private:
    Rectangle hat;
};

struct Frowny_hat : Frowny {
    Frowny_hat(Point p, int r);

    void draw_lines () const;

private:
    Polygon hat;
};

Smiley::Smiley (Point p, int r) :
    Circle  {p, r},
    left    {Point{p.x-r/3, p.y-r/3}, r / 4},
    right   {Point{p.x+r/3, p.y-r/3}, r / 4},
    mouth   {p, r*2/3, 200, 340} { }

void Smiley::draw_lines () const
{
    Circle::draw_lines();
    left.draw_lines();
    right.draw_lines();
    mouth.draw_lines();
}

Frowny::Frowny (Point p, int r) :
    Circle  {p, r},
    left    {Point{p.x-r/3, p.y-r/3}, r / 4},
    right   {Point{p.x+r/3, p.y-r/3}, r / 4},
    mouth   {Point{p.x, p.y+r*3/4}, r*2/3, 22, 157} { }

void Frowny::draw_lines () const
{
    Circle::draw_lines();
    left.draw_lines();
    right.draw_lines();
    mouth.draw_lines();
}

Smiley_hat::Smiley_hat (Point p, int r) :
    Smiley  {p, r},
    hat     {Point{p.x-r*3/4, p.y-r*5/4}, r*3/2, r/2}
{
    hat.set_fill_color(Color::black);
}

void Smiley_hat::draw_lines () const
{
    Smiley::draw_lines();
    hat.draw_lines();
}

Frowny_hat::Frowny_hat (Point p, int r)
    : Frowny  {p, r}
{
    hat.add(Point{p.x-r*3/4, p.y-r*3/4});
    hat.add(Point{p.x+r*3/4, p.y-r*3/4});
    hat.add(Point{p.x, p.y-r*3/2});

    hat.set_fill_color(Color::yellow);
}

void Frowny_hat::draw_lines () const
{
    Frowny::draw_lines();
    hat.draw_lines();
}


int main()
try {
    
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
    keep_window_open();
}
catch (...) {
    cerr << "exception\n";
    keep_window_open();
}