#define RECTANGLE 0  //enum {RECTANGLE, CIRCLE} shape_kind;
#define CIRCLE    1

struct point { int x, y; };
struct shape {
    int shape_kind; /* RECTANGLE or CIRCLE */
    struct point center; /* coor dinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

//(a)
double calculate_square(struct shape s)
{
    double square;

    if (s.shape_kind == RECTANGLE)
        (int)square = s.u.rectangle.height * s.u.rectangle.width / 2;
    if (s.shape_kind == CIRCLE)
        square = 3.1415 * s.u.circle.radius * s.u.circle.radius;

    return square;
}

//(b)
struct shape move_around(struct shape s, int x, int y)
{
    struct shape new_shape = s; //directly change s?

    new_shape.center.x += x;
    new_shape.center.y += y;

    return new_shape;           //return s; ?
}

//(c)
struct shape zoom(struct shape s, double c)
{
    struct shape new_shape = s;

    if (s.new_shape == RECTANGLE) {
        new_shape.u.rectangle.height *= c;
        new_shape.u.rectangle.width *= c;
    } else
        new_shape.u.circle.radius *= c;

    return new_shape; 
}