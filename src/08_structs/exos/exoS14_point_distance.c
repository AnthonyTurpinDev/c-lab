#include <math.h>
#include <stdio.h>

typedef struct s_point {
    int x;
    int y;
} t_point;

static float distance(t_point first, t_point second)
{
    float delta_x = (float)(first.x - second.x);
    float delta_y = (float)(first.y - second.y);

    return sqrtf(delta_x * delta_x + delta_y * delta_y);
}

int main(void)
{
    t_point origin = {0, 0};
    t_point point = {3, 4};

    printf("%.2f\n", distance(origin, point));
    return 0;
}
