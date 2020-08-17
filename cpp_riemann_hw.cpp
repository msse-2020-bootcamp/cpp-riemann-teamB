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
    double total = 0;
    double range = b - a;
    double dx = range/npoints;
    for(double i = a + dx/2; i < b; i+=dx)
    {
        //calculate evaluate_function function for each x
        double y = evaluate_function(i);
        //multiply dx for area
        double box_area = y * dx;
        //add box area
        total += box_area;
    }
return total;
}

int main(void)
{
    double pi = 3.141592653589793238;
    for (int i = 25; i <= 250; i+=25)
    {
        double our_pi = 4 * calculate_area(0,1,i);
        std::cout << std::setprecision(16);
        double percent_error = (our_pi - pi)/pi * 100;
        
        std::cout << "Using " <<i <<" boxes, " << "our pi = " 
                  << 4 * calculate_area(0,1,i) 
                  << " which is "<< percent_error << "% off from original pi value" <<std::endl;
    }

}
