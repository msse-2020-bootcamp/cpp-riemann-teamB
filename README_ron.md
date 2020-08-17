# cpp-riemann-teamB

Discussion Questions:

1. Q: What type should be used for x and the return type?
    x should be a double in the integrand because we use it to calculate with, and integer types can yield incorrect answers due to integer math rules. The return type should also be a double for the same reason. 

2. Q: What should the types of a, b, and npoints be? What type should the calculate integral function return?
    the bounds a and b, should be doubles for the same reason as above - we use them in calculations, and therefore must avoid the integer type to obtain the correct value. The npoints paramter however should be an integer, because we will alwats divide the range into some number of equal boxes, a non-integer value will not work here.

3. Given the a, b, and npoints, what is the width of the boxes you will be using?
    The width of the box in terms of those givens would be (b-a)/npoints.

4. At what points do you need to evaluate the integrand?
    We need to start at the value of a + dx/2 - the midpoint of the first box - then iterate by dx and evaluate each time.

5. Q: About how many points does it take to start converging to the proper result (4 places)?
    After about 110 boxes, the calculated value begins to converge to the actual value within 4 decimal places.

6. Q: Why would you ever use the Monte-Carlo method, given this is more accurate in less calculations?
    The Riemann's sum approach is sensitive to mis-estimatation for highly variable functions which may appear less standard than the curve of a simple function. If a highly oscillatory function is mis-matched with an inappropriately low box number, then large mis-estimations can occur. Whereas, using the MC integration method, you don't run this risk even for highly complex functions with a lot of variability.