#include <iostream>
#include <iomanip>

double evaluate_function(double x)
{
    double denominator = x * x + 1;
    double fraction = 1 / denominator;
    
    return fraction;
}

double calculate_area(double a, double b, int npoints)
{
    double area = 0;
    double range = b - a;
    double dx = range/npoints;
    for(double i = a + dx/2; i < b; i+=dx)
    {
        //call evaluate_function function for each x
        double y = evaluate_function(i);
        //multiply dx and y for area
        double box_area = y * dx;
        //add box area to cumulative total
        area += box_area;
    }
return area;
}



int main(void)
{
    double pi = 3.1415926535897932;
    std::cout << std::setprecision(16);
    for(int i = 10; i <=1000; i+=100)
    {
        double our_pi = 4 * calculate_area(0,1,i);
        double percent_error = (our_pi - pi) / pi * 100;
        std::cout << "Using " << i << " boxes, our calculated pi was " << our_pi 
                  << ". This has an error of " << percent_error  << "%" << std::endl;
    }
}