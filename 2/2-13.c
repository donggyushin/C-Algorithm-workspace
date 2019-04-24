#include <stdio.h>
#define VMAX 21 // Max value of vision

// data for physical test
typedef struct
{
    char name[20];
    int height;
    double vision;
} PhysCheck;

// get the average value of height
double ave_height(const PhysCheck dat[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + dat[i].height;
    }
    return sum / n;
}

// get the dist of vision
void dist_vision(const PhysCheck dat[], int n, int dist[])
{
    int i;
    for (i = 0; i < VMAX; i++)
    {
        dist[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
        {
            dist[(int)(dat[i].vision * 10)]++;
        }
    }
}

int main(void)
{
    int i;
    PhysCheck x[] = {
        {"park", 162, 0.3},
        {"ham", 173, 0.7},
        {"choi", 175, 2.0},
        {"hong", 171, 1.5},
        {"lee", 168, 0.4}};
    int nx = sizeof(x) / sizeof(x[0]); // The number of people
    int vdist[VMAX];                   // vision dist
    puts("Physics table");
    for (i = 0; i < nx; i++)
    {
        printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
    }
    printf("\n average height: %5.1f cm\n", ave_height(x, nx));
    dist_vision(x, nx, vdist);
    printf("\n vision dist\n");
    for (i = 0; i < VMAX; i++)
    {
        printf("%3.1f ~ : %2d\n", i / 10.0, vdist[i]);
    }
    return 0;
}
